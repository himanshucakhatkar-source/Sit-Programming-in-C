#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int n, i;
    double sum = 0.0;
    double mean;
    double variance_sum = 0.0;
    double variance;
    double deviation;
    double *values; // Pointer for dynamic array

    // 1. Get the number of values (n)
    printf("Enter the number of values: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid input for the number of values.\n");
        return 1;
    }

    // Allocate memory for the array of values (n doubles)
    values = (double *)malloc(n * sizeof(double));
    if (values == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    // 2. Get the values and calculate the Total Sum
    printf("Enter values : ");
    for (i = 0; i < n; i++) {
        if (scanf("%lf", &values[i]) != 1) {
            printf("Invalid input for values.\n");
            free(values);
            return 1;
        }
        sum += values[i];
    }

    // --- Calculations ---

    // 3. Calculate Mean (μ)
    mean = sum / n;

    // 4. Calculate Variance Sum (Σ(x_i - μ)²)
    for (i = 0; i < n; i++) {
        double diff = values[i] - mean;
        variance_sum += (diff * diff);
    }

    // 5. Calculate Variance (σ²)
    variance = variance_sum / n; 

    // 6. Calculate Standard Deviation (σ)
    deviation = sqrt(variance);

    // --- Output ---

    // Display the results formatted to two decimal places
    printf("Mean = %.2f\n", mean);
    printf("Variance = %.2f\n", variance);
    printf("Deviation = %.2f\n", deviation);

    // Free the dynamically allocated memory
    free(values);

    return 0;
}
