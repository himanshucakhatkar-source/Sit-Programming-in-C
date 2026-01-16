#include <stdio.h>
#include <math.h>

// Function to check if a number is prime
int is_prime(int n) {
if (n <= 1) {
        return 0;
    }
    if (n <= 3) {
        return 1;
    }
    
    int limit = (int)sqrt(n); 
    
    for (int i = 2; i <= limit; i++) {
        if (n % i == 0) {
            return 0;
        }
	}
	return 1;
}

// Function to check if a number is an Armstrong number
int is_armstrong(int n) {
if (n < 0) return 0;
    
    int original_n = n;
    
    int p = (int)floor(log10(n)) + 1;
    if (n == 0) p = 1; 

    long long sum = 0;
    int temp = original_n;
    
    while (temp > 0) {
        int digit = temp % 10;
        
        sum += (long long)round(pow(digit, p)); 
        
        temp /= 10;
    }
    
    return (sum == original_n);
	
}

int main() {
	int n;
	
	// Input from the user
	scanf("%d", &n);
	
	// Check if the number is prime
	if (is_prime(n))
		printf("%d is prime\n", n);
	else
		printf("%d is not prime\n", n);
	
	// Check if the number is an Armstrong number
	if (is_armstrong(n))
		printf("%d is Armstrong\n", n);
	else
		printf("%d is not Armstrong\n", n);
	
	return 0;
}
