#include <stdio.h>

void calculateAdjacentTimes(int hour, int minute, int *prev_hour, int *prev_minute, int *next_hour, int *next_minute) {
    // Calculate the previous minute
    *prev_minute = (minute - 1 + 60) % 60;

    // Calculate the previous hour
    *prev_hour = hour;
    if (*prev_minute == 59) {
        *prev_hour = (hour - 1 + 12) % 12;
    }

    // Calculate the next minute
    *next_minute = (minute + 1) % 60;

    // Calculate the next hour
    *next_hour = hour;
    if (*next_minute == 0) {
        *next_hour = (hour + 1) % 12;
    }
}

int main() {
    int hour, minute;
    printf("Enter the current time (in 24-hour format):\n");
    printf("Hour: ");
    scanf("%d", &hour);
    printf("Minute: ");
    scanf("%d", &minute);

    int prev_hour, prev_minute, next_hour, next_minute;
    calculateAdjacentTimes(hour, minute, &prev_hour, &prev_minute, &next_hour, &next_minute);

    printf("Time 1 minute ago: %02d:%02d\n", prev_hour, prev_minute);
    printf("Time 1 minute later: %02d:%02d\n", next_hour, next_minute);

    return 0;
}
