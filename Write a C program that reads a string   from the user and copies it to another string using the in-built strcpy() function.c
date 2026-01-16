#include <stdio.h>
#include <string.h>

int main() {
	char src[100];  // Source string
	char dest[100]; // Destination string
	
if (fgets(src, 100, stdin) == NULL) {
        return 1;
}
    src[strcspn(src, "\n")] = 0;
    strcpy(dest, src);
	// Print the copied string
	printf("%s\n", dest);
	
	return 0;
}
