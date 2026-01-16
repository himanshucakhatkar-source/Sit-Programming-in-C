#include <stdio.h>
#include <stdlib.h> // Required for dynamic memory allocation (malloc)

int main() {
    int n, i;
    // Use long long for sums to safely handle potential overflow with large arrays/numbers
    long long positive_sum = 0;
    long long negative_sum = 0;
    int *arr; // Pointer for the array

    // 1. Read the number of elements (n)
    if (scanf("%d", &n) != 1 || n <= 0) {
        // Handle invalid or non-positive size
        return 1;
    }

    // Allocate memory for the array of n integers
    arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        // Handle memory allocation failure
        return 1;
    }

    // 2. Read the n elements into the array
    for (i = 0; i < n; i++) {
        if (scanf("%d", &arr[i]) != 1) {
            // Handle error during input reading
            free(arr);
            return 1;
        }
    }

    // 3. Calculate the sums
    for (i = 0; i < n; i++) {
        int element = arr[i];
        
        // Check if the element is positive (greater than 0)
        if (element > 0) {
            positive_sum += element;
        } 
        // Check if the element is negative (less than 0)
        else if (element < 0) {
            negative_sum += element;
        }
        // Note: Zero (0) is neither positive nor negative, so it's ignored by both conditions.
    }

    // 4. Output the results
    printf("%lld\n", positive_sum);
    printf("%lld\n", negative_sum);

    // Free the dynamically allocated memory
    free(arr);

    return 0;
}
