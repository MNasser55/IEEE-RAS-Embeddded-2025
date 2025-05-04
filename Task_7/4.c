#include <stdio.h>
typedef enum {
    SATURDAY,
    SUNDAY,
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY
} Day;

const char* weekday_weekend(Day day) {
    if (day == FRIDAY ) {
        return "Weekend";
    } else {
        return "Weekday";
    }
}

int main() {
    Day today = FRIDAY;
    printf("Today is a %s.\n",weekday_weekend(today));

    today = SATURDAY;
    printf("Today is a %s.\n",weekday_weekend(today));

    return 0;
}
