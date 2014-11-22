#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#include "CommunicationInterfaces.h"
#include "IntegrationCode.h"

#ifndef TRUE
#define TRUE kcg_true
#define FALSE kcg_false
#endif

operator_input_type ua_inputs;
operator_output_type ua_outputs;

kcg_bool ejected = FALSE;

/*
kcg_char latitude_str[11];
kcg_real cam_latitude = 0.0f;

kcg_char longitude_str[11];
kcg_real cam_longitude = 0.0f;
*/

int num_receivers;
int* receivers;

void setReceivers() {
	num_receivers = 6;
	receivers = (int *) malloc(num_receivers * sizeof(int));
	receivers[0] = TS01ID;
	receivers[1] = TS02ID;
	receivers[2] = TS03ID;
	receivers[3] = TS04ID;
	receivers[4] = TS05ID;
	receivers[5] = TS05TESTID;
}

void receiveMessage(FRAMEWORK_MESSAGE message) {
    TS05_INPUT_INTERFACE input;

    if (message.to == TS05ID) {
        input = message.input_interface.ts05_input_interface;
        switch (message.from) {
        case TS01ID:
            printf("Received: Message from TS01 to TS05 \n");
            ua_inputs.SAT_Ejection_Signal = input.SAT_Ejection_Signal;
            if (ua_inputs.SAT_Ejection_Signal)
                ejected = TRUE;
            if (!ejected) {
                ua_inputs.SAT_Altitude_Update = TRUE;
                ua_inputs.SAT_Altitude_Value = input.SAT_Altitude_Value / 1000.0;
                ua_inputs.SAT_Latitude_Update = TRUE;
                ua_inputs.SAT_Latitude_Value = input.SAT_Latitude_Value;
                ua_inputs.SAT_Longitude_Update = TRUE;
                ua_inputs.SAT_Longitude_Value = input.SAT_Longitude_Value;
            }
            break;
        case TS02ID:
            printf("Received: Message from TS02 to TS05 \n");
            
            /* US 01 */
            if (ejected) {
                ua_inputs.SAT_Altitude_Update = input.SAT_Altitude_Update;
                ua_inputs.SAT_Altitude_Value = input.SAT_Altitude_Value;
                ua_inputs.SAT_Latitude_Update = input.SAT_Latitude_Update;
                ua_inputs.SAT_Latitude_Value = input.SAT_Latitude_Value;
                ua_inputs.SAT_Longitude_Update = input.SAT_Longitude_Update;
                ua_inputs.SAT_Longitude_Value = input.SAT_Longitude_Value;
            }
            ua_inputs.SAT_Period_Update = input.SAT_Period_Update;
            ua_inputs.SAT_Period_Value = input.SAT_Period_Value;
            
            /* US 05 */
            ua_inputs.SAT_OperationMode_Update = input.SAT_OperationMode_Update;
            ua_inputs.SAT_OperationMode_Value = input.SAT_OperationMode_Value;
            ua_inputs.SAT_GyroscopeState_Update = input.SAT_GyroscopeState_Update;
            ua_inputs.SAT_GyroscopeState_Value = input.SAT_GyroscopeState_Value;
            ua_inputs.SAT_HorizonSensorState_Update = input.SAT_HorizonSensorState_Update;
            ua_inputs.SAT_HorizonSensorState_Value = input.SAT_HorizonSensorState_Value;
            ua_inputs.SAT_CameraState_Update = input.SAT_CameraState_Update;
            ua_inputs.SAT_CameraState_Value = input.SAT_CameraState_Value;
            
            /* US 11 */
            ua_inputs.SAT_Initialization_Signal = input.SAT_Initialization_Signal;
            
            /* US 14 */
            ua_inputs.SAT_Fix_Response = input.SAT_Fix_Response;
            ua_inputs.SAT_CameraState_Fail = input.SAT_CameraState_Fail;
            ua_inputs.SAT_GyroscopeState_Fail = input.SAT_GyroscopeState_Fail;
            ua_inputs.SAT_HorizonSensorState_Fail = input.SAT_HorizonSensorState_Fail;
            
            break;
        case TS03ID:
            printf("Received: Message from TS03 to TS05 \n");
			
			/* US 12 */
			ua_inputs.cam_picture_loaded = input.cam_picture_loaded;
			if (ua_inputs.cam_picture_loaded) {
				pid_t pid = fork();
				if (pid == 0) {
					char* args[5];
					args[0] = "/usr/bin/gimp";
					args[1] = "-d";
					args[2] = "-f";
					args[3] = "-s";
					args[4] = "http://c.diggita.it/modules/auto_thumb/thumbs/1101682_raspbian_logo_thumb25255B325255D_thumb_big.jpg";
					execv("/usr/bin/gimp", args);
					exit(0);
				}
			}
			
            break;
        case TS04ID:
            printf("Received: Message from TS04 to TS05 \n");
            break;
        case TS05ID:
            printf("Received: Message from TS05 to TS05 \n");
            break;
        }
    }
}

void buildMessage(FRAMEWORK_MESSAGE *message) {
    message->from = TS05ID;
    switch (message->to) {
    case TS01ID:
        printf("Sent: Message from TS05 to TS01 \n");
        TS01_INPUT_INTERFACE *output1 = &(message->input_interface.ts01_input_interface);
        /*output->SignalFromTeam5 = ua_outputs.SignalToTeam1;*/
        break;
    case TS02ID:
        printf("Sent: Message from TS05 to TS02 \n");
        TS02_INPUT_INTERFACE *output2 = &(message->input_interface.ts02_input_interface);
        /*output->SignalFromTeam5 = ua_outputs.SignalToTeam2;*/
        break;
    case TS03ID:
        printf("Sent: Message from TS05 to TS03 \n");
        TS03_INPUT_INTERFACE *output3 = &(message->input_interface.ts03_input_interface);
		output3->TakePicture = ua_outputs.cam_take_picture;
        /*output->SignalFromTeam5 = ua_outputs.SignalToTeam3;*/
        break;
    case TS04ID:
        printf("Sent: Message from TS05 to TS04 \n");
        TS04_INPUT_INTERFACE *output4 = &(message->input_interface.ts04_input_interface);
        /*output->SignalFromTeam5 = ua_outputs.SignalToTeam4;*/
        break;
    case TS05ID:
        printf("Sent: Message from TS05 to TS05 \n");
        TS05_INPUT_INTERFACE *output5 = &(message->input_interface.ts05_input_interface);
        /*output->SignalFromTeam5 = ua_outputs.SignalToTeam5;*/
        break;
    case TS05TESTID:
        printf("Sent: message to TS05 test window \n");
        TS05TEST_INPUT_INTERFACE *output5t = &(message->input_interface.ts05test_input_interface);
        
        /* US 05 */
        output5t->SAT_GyroscopeState_Toggle = ua_outputs.SAT_GyroscopeState_Toggle;
        output5t->SAT_GyroscopeState_ToggleTo = ua_outputs.SAT_GyroscopeState_ToggleTo;
        output5t->SAT_HorizonSensorState_Toggle = ua_outputs.SAT_HorizonSensorState_Toggle;
        output5t->SAT_HorizonSensorState_ToggleTo = ua_outputs.SAT_HorizonSensorState_ToggleTo;
        output5t->SAT_CameraState_Toggle = ua_outputs.SAT_CameraState_Toggle;
        output5t->SAT_CameraState_ToggleTo = ua_outputs.SAT_CameraState_ToggleTo;
        
        /* US 11 */
		/* This code is unused due to TS03 bitching around... */
		/*
        if (ua_outputs.conv_latitude_entered) {
			int i = 1;
			while (i < ua_outputs.conv_latitude_str_len - 1) {
				latitude_str[i-1] = ua_outputs.conv_latitude_str[i];
				i++;
			}
			latitude_str[i] = '\0';
			cam_latitude = atof(latitude_str);
			if (ua_outputs.conv_latitude_str[0] == '-')
				cam_latitude = -cam_latitude;
		}
        if (ua_outputs.conv_longitude_entered) {
			int i = 1;
			while (i < ua_outputs.conv_longitude_str_len - 1) {
				longitude_str[i-1] = ua_outputs.conv_longitude_str[i];
				i++;
			}
			longitude_str[i] = '\0';
			cam_longitude = atof(longitude_str);
			if (ua_outputs.conv_longitude_str[0] == '-')
				cam_longitude = -cam_longitude;
			printf("%g", cam_longitude);
		}
		*/
		
		/* US12 */
		output5t->cam_take_picture = ua_outputs.cam_take_picture;
		
        /* US14 */
        output5t->SAT_Auto_Verify = ua_outputs.SAT_Auto_Verify;
        output5t->SAT_Fix_Equipments = ua_outputs.SAT_Fix_Equipments;
        
        break;
    }
}

void executeOperator() {
    ts05(&ua_inputs, &ua_outputs);
}

void clear_ua_inputs() {
    ua_receive_clear(&ua_inputs, NULL);
    
    /* US 01 */
    ua_inputs.SAT_Altitude_Update = FALSE;
    ua_inputs.SAT_Altitude_Value = 0.0;
    ua_inputs.SAT_Latitude_Update = FALSE;
    ua_inputs.SAT_Latitude_Value = 0.0;
    ua_inputs.SAT_Longitude_Update = FALSE;
    ua_inputs.SAT_Longitude_Value = 0.0;
    ua_inputs.SAT_Period_Update = FALSE;
    ua_inputs.SAT_Period_Value = 0.0;
    
    /* US 05 */
    ua_inputs.SAT_OperationMode_Update = FALSE;
    ua_inputs.SAT_OperationMode_Value = OPMODE_GROUND_SAFE;
    ua_inputs.SAT_GyroscopeState_Update = FALSE;
    ua_inputs.SAT_GyroscopeState_Value = FALSE;
    ua_inputs.SAT_HorizonSensorState_Update = FALSE;
    ua_inputs.SAT_HorizonSensorState_Value = FALSE;
    ua_inputs.SAT_CameraState_Update = FALSE;
    ua_inputs.SAT_CameraState_Value = FALSE;
    
    /* US 11 */
    ua_inputs.SAT_Ejection_Signal = FALSE;
    ua_inputs.SAT_Initialization_Signal = 0;
	
	/* US 12 */
	ua_inputs.cam_picture_loaded = FALSE;
	
    /* US 14 */
    ua_inputs.SAT_Fix_Response = FALSE;
    ua_inputs.SAT_CameraState_Fail = FALSE;
    ua_inputs.SAT_GyroscopeState_Fail = FALSE;
    ua_inputs.SAT_HorizonSensorState_Fail = FALSE;
}

void clear_ua_outputs() {
    ts05_reset(&ua_outputs);
}

void initializeCustomLogic() {/* Insert your additional logic */
    /* For instance, you can initialize your RaspberryPi controller here */
}

void executeCustomLogic() {
    /* Insert your additional logic */
    /* For instance, you can execute your RaspberryPi controller here */
    /* You can use ua_outputs (which is updated before this function is called) to feed you controller */
}
