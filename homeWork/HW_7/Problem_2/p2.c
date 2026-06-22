// Problem 2. Time Management (15 pts)
#include <stdio.h>

typedef struct {
    unsigned hour;
    unsigned minute;
    unsigned second;
} Time;

// Create and validate a Time object
Time Time_create(unsigned h, unsigned m, unsigned s);

// Print in 24-hour format HH:MM:SS
void Time_printUniversal(const Time *time);

// Print in 12-hour format HH:MM:SS AM/PM
void Time_printStandard(const Time *time);
// Increment time by 1 second
void Time_tick(Time *time);

int main(void) {
    unsigned h, m, s;

    printf("Enter the time (hour, minute, second): ");
    scanf("%u %u %u", &h, &m, &s);

    Time t = Time_create(h, m, s);

    for (int i = 0; i < 20; i++) {
        Time_printUniversal(&t);
        Time_printStandard(&t);
        Time_tick(&t);
    }

    return 0;
}
Time Time_create(unsigned h, unsigned m, unsigned s) {
    Time t;

    t.hour   = (h < 24) ? h : 0;
    t.minute = (m < 60) ? m : 0;
    t.second = (s < 60) ? s : 0;

    return t;
}

// Print in 24-hour format HH:MM:SS
void Time_printUniversal(const Time *time) {
    printf("%02u:%02u:%02u\n",
           time->hour, time->minute, time->second);
}

// Print in 12-hour format HH:MM:SS AM/PM
void Time_printStandard(const Time *time) {
    unsigned hour12;
    char *ampm;

    if (time->hour == 0) {
        hour12 = 12;
        ampm = "AM";
    } else if (time->hour < 12) {
        hour12 = time->hour;
        ampm = "AM";
    } else if (time->hour == 12) {
        hour12 = 12;
        ampm = "PM";
    } else {
        hour12 = time->hour - 12;
        ampm = "PM";
    }

    printf("%02u:%02u:%02u %s\n",
           hour12, time->minute, time->second, ampm);
}

// Increment time by 1 second
void Time_tick(Time *time) {
    time->second++;

    if (time->second >= 60) {
        time->second = 0;
        time->minute++;

        if (time->minute >= 60) {
            time->minute = 0;
            time->hour++;

            if (time->hour >= 24) {
                time->hour = 0;
            }
        }
    }
}