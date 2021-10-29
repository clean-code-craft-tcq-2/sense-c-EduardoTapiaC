#include "stats.h"
struct Stats compute_statistics(const float* numberset, int setlength) {
    struct Stats s;
    if (setlength < 1)
    {
        s.average = NAN;
        s.min = NAN;
        s.max = NAN;
        return s;
    }
    s.average = 0;
    s.min = INT_MAX;
    s.max = 0;
    for (int i = 0; i < setlength; i++)
    {
        s.average = s.average + numberset[i]/setlength;     //each time we add, we divide to avoid saturation on big numbers(since we cannot assume the range).
        
        if (numberset[i] < s.min )              
        {
            s.min = numberset[i];
        }
       
        if (numberset[i] > s.max )             
        {
            s.max = numberset[i];
        }
    }
    printf("average is %f \n", s.average);
    return s;
}


