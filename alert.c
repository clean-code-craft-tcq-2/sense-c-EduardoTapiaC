#include "stats.h"
#include "alert.h"

int emailAlertCallCount = 0;
int ledAlertCallCount = 0;
void check_and_alert(float maxThreshold, alerter_funcptr alerters[], struct Stats computedStats)
{
    enum alert_type alert;
    if (computedStats.max > maxThreshold)
    {
        emailAlertCallCount = 1;
        (*alerters[alert = emailAlert])();  //function pointer, calls function which has corresponding alert.
        
        ledAlertCallCount = 1;
        (*alerters[alert = ledAlert])();    
    }

    
}


void emailAlerter()
{
    printf("email alert to user\n");
}

void ledAlerter()
{
    printf("led alert to user\n");
}