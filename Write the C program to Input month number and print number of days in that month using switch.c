#include <stdio.h>

int main() {
    int month_number;

    // Prompt the user for input as shown in the example
    printf("Enter month number: ");
    
    // Read the integer from standard input
    if (scanf("%d", &month_number) != 1) {
        // Simple error handling for non-integer input
        fprintf(stderr, "Error reading month number.\n");
        return 1;
    }

    // Use a switch statement to determine the number of days
    switch (month_number) {
        // Months with 31 days (January, March, May, July, August, October, December)
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            printf("31 days\n");
            break;

        // Months with 30 days (April, June, September, November)
        case 4:
        case 6:
        case 9:
        case 11:
            printf("30 days\n");
            break;

        // February
        case 2:
            printf("28 or 29 days\n");
            break;

        // Invalid input (any number outside 1-12)
        default:
            printf("Invalid month number\n");
            break;
    }

    return 0;
}
