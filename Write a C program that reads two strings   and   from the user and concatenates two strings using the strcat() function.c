#include <stdio.h>
#include <string.h>

int main() {
	char str1[100];  // First string
	char str2[100];  // Second string
// Read the two strings from standard input
scanf("%s", str1); 
scanf("%s", str2);
    
    // Concatenate str2 onto str1
strcat(str1, str2);
	// Print the concatenated result
	printf("%s\n", str1);
	
	return 0;
}
