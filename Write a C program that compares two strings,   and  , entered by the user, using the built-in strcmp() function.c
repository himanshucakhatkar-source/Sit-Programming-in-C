#include <stdio.h>
#include <string.h>

int main() {
	char str1[100];  // First string
	char str2[100];  // Second string

int result;      // Variable to store the comparison result
	
    // Input string from the user
    
    
    
    //Type your content here
    
    // Read the two strings from standard input.
    // Using fgets is safer for reading strings.
    if (fgets(str1, 100, stdin) == NULL) {
        return 1;
    }
    if (fgets(str2, 100, stdin) == NULL) {
        return 1;
    }

    // Remove the trailing newline characters added by fgets, 
    // which would otherwise interfere with the comparison.
    str1[strcspn(str1, "\n")] = 0;
    str2[strcspn(str2, "\n")] = 0;
    
    // Use strcmp() to compare str1 and str2 and store the result.
    result = strcmp(str1, str2);
    
	if (result == 0) {
		printf("equal\n");
	} else if (result < 0) {
		printf("str1 is less than str2\n");
	} else {
		printf("str1 is greater than str2\n");
	}
	
	return 0;
}
