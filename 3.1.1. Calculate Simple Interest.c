#include <stdio.h>

// Function to calculate simple interest
int calculateSimpleInterest(int P, int T, int R) {
	
	// Complete the function
// Formula: SI = (P * T * R) / 100
    int SI = (P * T * R) / 100;
	return SI;
}

int main() {
	int principal, time, rate, simpleInterest;
    
    // Read the number of principal, time, and rate from the user
    if (scanf("%d %d %d", &principal, &time, &rate) != 3) {
        return 1;}
	// Calculate the simple interest
	simpleInterest = calculateSimpleInterest(principal, time, rate);
	
	// Print the result
	printf("%d\n", simpleInterest);
	
	return 0;
}
