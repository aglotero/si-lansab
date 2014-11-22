#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <sys/types.h>
#include <sys/socket.h>
#include <sys/un.h>
#include <unistd.h>

#include "CommunicationInterfaces.h"
#include "IntegrationCode.h"

#ifndef TRUE
#define TRUE kcg_true
#define FALSE kcg_false
#endif

#define SRV_PATH "/tmp/socket"

operator_input_type ua_inputs;
operator_output_type ua_outputs;

int num_receivers;
int* receivers;

int num_receivers;
int* receivers;

void setReceivers() {
	num_receivers = 3;
	receivers = (int *) malloc(num_receivers * sizeof(int));
	receivers[0] = TS01TESTID;
	receivers[1] = TS04ID;
	receivers[2] = TS05ID;
}

void receiveMessage(FRAMEWORK_MESSAGE message) {
    TS01_INPUT_INTERFACE input;

    if (message.to == TS01ID) {
        input = message.input_interface.ts01_input_interface;
        switch (message.from) {
        case TS01ID:
            printf("Received: Message from TS01 to TS01 \n");
            break;
        case TS02ID:
            printf("Received: Message from TS02 to TS01 \n");
            break;
        case TS03ID:
            printf("Received: Message from TS03 to TS01 \n");
            break;
        case TS04ID:
        case TS01TESTID:
            printf("Received: Message from TS04 to TS01 \n");
            ua_inputs.AutoDestruct = input.AutoDestruct;
            ua_inputs.EnableRocketLaunch = input.EnableRocketLaunch;
            ua_inputs.Manual_Notify = input.Manual_Notify;
            ua_inputs.Manual_Override = input.Manual_Override;
            ua_inputs.Manual_StartPhase2 = input.Manual_StartPhase2;
            ua_inputs.Manual_StartPhase3 = input.Manual_StartPhase3;
            ua_inputs.Manual_StartPhaseFinal = input.Manual_StartPhaseFinal;
            ua_inputs.Manual_SatLaunch = input.Manual_SatLaunch;
            break;
        case TS05ID:
            printf("Received: Message from TS05 to TS01 \n");
            break;
        }
    }
}

void buildMessage(FRAMEWORK_MESSAGE *message) {
    message->from = TS01ID;
    switch (message->to) {
    case TS01ID:
        printf("Sent: Message from TS01 to TS01 \n");
        TS01_INPUT_INTERFACE *output1 = &(message->input_interface.ts01_input_interface);
        /*output->SignalFromTeam1 = ua_outputs.SignalToTeam1;*/
        break;
    case TS02ID:
        printf("Sent: Message from TS01 to TS02 \n");
        TS02_INPUT_INTERFACE *output2 = &(message->input_interface.ts02_input_interface);
        /*output->SignalFromTeam1 = ua_outputs.SignalToTeam2;*/
        break;
    case TS03ID:
        printf("Sent: Message from TS01 to TS03 \n");
        TS03_INPUT_INTERFACE *output3 = &(message->input_interface.ts03_input_interface);
        /*output->SignalFromTeam1 = ua_outputs.SignalToTeam3;*/
        break;
    case TS04ID:
        printf("Sent: Message from TS01 to TS04 \n");
        TS04_INPUT_INTERFACE *output4 = &(message->input_interface.ts04_input_interface);
        output4->RocketStatus = ua_outputs.ControlCenterStatus;
        output4->SatLaunched = ua_outputs.SatLaunched;
        break;
    case TS05ID:
        printf("Sent: Message from TS01 to TS05 \n");
        TS05_INPUT_INTERFACE *output5 = &(message->input_interface.ts05_input_interface);
        output5->SAT_Ejection_Signal = ua_outputs.SatLaunched;
        break;
    case TS01TESTID:
        printf("Sent: Message to TS01 test window \n");
        TS01TEST_INPUT_INTERFACE *output1t = &(message->input_interface.ts01test_input_interface);
        output1t->RocketStatus = ua_outputs.ControlCenterStatus;
        output1t->SatLaunched = ua_outputs.SatLaunched;
        break;
    }
}

void executeOperator() {
    Main(&ua_inputs, &ua_outputs);
}

void clear_ua_inputs() {
    ua_receive_clear(&ua_inputs, NULL);

    /* clear external inputs, may need additional logic */
    ua_inputs.AutoDestruct = FALSE;
    ua_inputs.EnableRocketLaunch = FALSE;
    ua_inputs.Manual_Notify = FALSE;
    ua_inputs.Manual_Override = 0;
    ua_inputs.Manual_StartPhase2 = FALSE;
    ua_inputs.Manual_StartPhase3 = FALSE;
    ua_inputs.Manual_StartPhaseFinal = FALSE;
    ua_inputs.Manual_SatLaunch = FALSE;
}

void clear_ua_outputs() {
    Main_reset(&ua_outputs);
}

void initializeCustomLogic() {
    /* Insert your additional logic */
    /* For instance, you can initialize your RaspberryPi controller here */
}

void executeCustomLogic() {
    /* Insert your additional logic */
    /* For instance, you can execute your RaspberryPi controller here */
    /* You can use ua_outputs (which is updated before this function is called) to feed you controller */

    int sock;
    struct sockaddr_un server;
    char buf[128];

    memset(&buf, 0, sizeof(buf));
    sprintf(buf, "{\"RocketLaunch\": %d, \"RocketDestroy\": %d }", ua_outputs.RocketLaunch, ua_outputs.RocketDestroy);

    sock = socket(AF_UNIX, SOCK_STREAM, 0);
    if (sock < 0) {
        perror("opening stream socket");
        return;
    }
    server.sun_family = AF_UNIX;
    strcpy(server.sun_path, SRV_PATH);

    if (connect(sock, (struct sockaddr *) &server, sizeof(struct sockaddr_un)) < 0) {
        close(sock);
        perror("connecting stream socket");
        return;
    }

    if (write(sock, buf, strlen(buf)) < 0)
        perror("writing on stream socket");

    close(sock);
}
