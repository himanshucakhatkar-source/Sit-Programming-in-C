#include <stdio.h>

int main() {
    int n, original_n;
    int sum = 0;
    
    // Read the integer from the user
    if (scanf("%d", &n) != 1) {
        // Handle non-integer input
        printf("Invalid input\n");
        return 1; // Exit with an error code
    }

    // --- Input Validation based on Constraints ---
    // A five-digit number n must satisfy 10000 <= n <= 99999
    if (n >= 10000 && n <= 99999) {
        // Input is valid: proceed to calculate the sum of digits
        
        // Store the original number as 'n' will be modified
        original_n = n; 

        // --- Calculate Sum of Digits ---
        // Loop runs as long as the number is greater than 0
        while (n > 0) {
            // 1. Get the last digit using the modulo operator (%)
            int digit = n % 10; 
            
            // 2. Add the digit to the sum
            sum += digit;
            
            // 3. Remove the last digit using integer division (/)
            n /= 10; 
        }

        // Print the result
        printf("%d\n", sum);
    } else {
        // Input is invalid
        printf("Invalid input\n");
    }

    return 0;
}
