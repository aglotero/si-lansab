@echo off

set PATH=C:\cygwin\bin;%PATH%

call Configuration.bat

call "%OBJDIR%\%EXEC%" %DF_SERVER_IP% %DF_SERVER_PORT% %BROADCAST_GROUP% %NETWORK_INTERFACE% %BROADCAST_PORT%

pause