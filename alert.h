#include <stdio.h>
#ifndef ALERT_H 
#define ALERT_H 

typedef void (*alerter_funcptr)();
void check_and_alert(float maxThreshold, alerter_funcptr alerters[], struct Stats computedStats);

enum alert_type{ 
    emailAlert = 0, 
    ledAlert 
};

//alerter functions to call by function pointer
extern void emailAlerter();
extern void ledAlerter();

extern int emailAlertCallCount;
extern int ledAlertCallCount;

#endif