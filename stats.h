#ifndef STATS_H 
#define STATS_H 
#include <math.h>
#include <stdio.h>
struct Stats{
    float average;
    float min;
    float max;
};

#define INT_MAX       2147483647

struct Stats compute_statistics(const float* numberset, int setlength);

#endif