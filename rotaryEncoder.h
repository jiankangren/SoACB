#include <string.h>
#include <errno.h>
#include <stdlib.h>
#include <wiringPi.h>

#define  RoAPin    21
#define  RoBPin    22
#define  RoSPin    23

unsigned char flag;
unsigned char Last_RoB_Status;
unsigned char Current_RoB_Status;

void rotaryDeal(int *counter);
void rotaryClear(int *counter);
void *rotary(void *param);
