#include <stdio.h>

int isValidTime(int hour, int minute) {
    if (hour < 0 || hour > 23)
        return 0;
    if (minute < 0 || minute > 59)
        return 0;
    return 1;
}

int main() {
    int hour, minute;
    float hour_angle, minute_angle, angle;

    printf("Enter the time in format (hh:mm): ");
    scanf("%d:%d", &hour, &minute);

    if (!isValidTime(hour, minute)) {
        printf("Invalid time input. Please enter a valid time.\n");
        return 0;
    }


    hour_angle = 0.5 * ((hour % 12) * 60 + minute);

    minute_angle = 6 * minute;

    angle = hour_angle - minute_angle;
    if (angle < 0)
        angle = -angle;
    if (angle > 180)
        angle = 360 - angle;

    printf("Angle between the hour hand and minute hand: %.2f degrees\n", angle);

    return 0;
}
