#include <stdio.h>
#include<limits.h>
void calculateAdjacentTimes(int hour, int minute, int *prev_hour, int *prev_minute, int *next_hour, int *next_minute) {
    
    *prev_minute = (minute - 1 + 60) % 60;


    *prev_hour = hour;
    if (*prev_minute == 59) {
        *prev_hour = (hour - 1 + 12) % 12;
    }

    
    *next_minute = (minute + 1) % 60;

    
    *next_hour = hour;
    if (*next_minute == 0) {
        *next_hour = (hour + 1) % 12;
    }
}
void rightanglecheck(int hour, int minute,int prev_hour,int prev_minute,int next_hour,int next_minute, int *count, int *lastsaved) {
    
    float hour_angle_lead1 = (prev_hour % 12) * 30 + prev_minute / 2;
    float hour_angle_lag1 = hour_angle_lead1 - 180;

    
    float minute_angle1 = (prev_minute * 6) % 360;
    float hour_angle_lead2 = (next_hour % 12) * 30 + next_minute / 2;
    float hour_angle_lag2 = hour_angle_lead2 - 180;
    
    
    float minute_angle2 = (next_minute * 6) % 360;

    
    float angle_diff_lead1 = hour_angle_lead1 - minute_angle1;
    float angle_diff_lag1 = hour_angle_lag1 - minute_angle1;

    //printf("Unormalized%f lead %f lag\n",angle_diff_lead1,angle_diff_lag1);

    while (angle_diff_lead1 < 0)
        angle_diff_lead1 += 360;
    while (angle_diff_lag1 < 0)
        angle_diff_lag1 += 360;
    angle_diff_lead1 = (angle_diff_lead1 > 180) ? (360 - angle_diff_lead1) : angle_diff_lead1;
    angle_diff_lag1 = (angle_diff_lag1 > 180) ? (360 - angle_diff_lag1) : angle_diff_lag1;

    float angle_diff_lead2 = hour_angle_lead2 - minute_angle2;
    float angle_diff_lag2 = hour_angle_lag2 - minute_angle2;
    //printf("%f lead %f lag\n",angle_diff_lead1,angle_diff_lag1);
    //printf("Unormalized%f lead %f lag\n",angle_diff_lead2,angle_diff_lag2);
    

    while (angle_diff_lead2 < 0)
        angle_diff_lead2 += 360;
    while (angle_diff_lag2 < 0)
        angle_diff_lag2 += 360;
    angle_diff_lead2 = (angle_diff_lead2> 180) ? (360 - angle_diff_lead2) : angle_diff_lead2;
    angle_diff_lag2 = (angle_diff_lag2 > 180) ? (360 - angle_diff_lag2) : angle_diff_lag2;

    //printf("%f lead %f lag\n",angle_diff_lead2,angle_diff_lag2);
    
    if ((angle_diff_lead2 > 90 && angle_diff_lead1 < 90) || (angle_diff_lag2 > 90 && angle_diff_lag1 < 90)) {
        //printf("%dlast and current %02d:%02d\n",*lastsaved, hour, minute);
        if(hour*60+minute-(*lastsaved)>=20 || *lastsaved==INT_MAX){
        printf("%02d:%02d\n", hour, minute);
        (*count)++;
        *lastsaved=hour*60+minute;}
        
    }
    
}

int main() {
    printf("Times when hour and minute hands form a 90-degree angle:\n");

    int count = 0;
    int f=0;
    int lastsaved=INT_MAX;
    
    for (int hour = 0; hour < 24; hour++) {
        
        int cc=2;
        for (int minute = 0; minute < 60; minute++) {
            int prev_hour, prev_minute, next_hour, next_minute;
            
              
            calculateAdjacentTimes(hour, minute, &prev_hour, &prev_minute, &next_hour, &next_minute);
            rightanglecheck(hour, minute, prev_hour, prev_minute, next_hour, next_minute, &count,&lastsaved);
            
        }
    }
    // int prev_hour, prev_minute, next_hour, next_minute;
    //         int hour=00;
    //         int minute=59;
              
    //         calculateAdjacentTimes(hour, minute, &prev_hour, &prev_minute, &next_hour, &next_minute);
    //         printf("%02d:%02d prev %02d:%02d new\n", prev_hour, prev_minute, next_hour, next_minute);
    //         rightanglecheck(hour, minute, prev_hour, prev_minute, next_hour, next_minute, &count,&lastsaved);

    printf("Total occurrences: %d\n", count);

    return 0;
}
