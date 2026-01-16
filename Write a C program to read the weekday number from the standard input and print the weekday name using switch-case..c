#include <stdio.h>

int main() {
    int day_number;

    if (scanf("%d", &day_number) != 1) {
        return 1;
    }

    switch (day_number) {
        case 0:
            printf("Sunday\n");
            break;
        case 1:
            printf("Monday\n");
            break;
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednesday\n");
            break;
        case 4:
            printf("Thursday\n");
            break;
        case 5:
            printf("Friday\n");
            break;
        case 6:
            printf("Saturday\n");
            break;
        default:
            printf("Invalid weekday number\n");
            break;
    }

    return 0;
}
