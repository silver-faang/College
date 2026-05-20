#include <stdio.h>

int main() {
    int reset_hour, reset_minute;
    int clock_hour, clock_minute;

    printf("Enter the reset time (hh:mm): ");
    scanf("%d:%d", &reset_hour, &reset_minute);

    printf("Enter the clock time (hh:mm): ");
    scanf("%d:%d", &clock_hour, &clock_minute);


    int reset_time_minutes = reset_hour * 60 + reset_minute;
    int clock_time_minutes = clock_hour * 60 + clock_minute;
    int elapsed_minutes = clock_time_minutes - reset_time_minutes;


    int additional_minutes = elapsed_minutes / 60 * 10;
    elapsed_minutes-=additional_minutes;
    
    int current_real_hour = (reset_hour + elapsed_minutes / 60) % 24;
    int current_real_minute = (reset_minute + elapsed_minutes)  % 60;

    printf("Current Real Time: %02d:%02d\n", current_real_hour, current_real_minute);

    return 0;
}
