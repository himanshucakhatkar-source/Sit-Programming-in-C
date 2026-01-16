#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_STRINGS 100
#define MAX_LENGTH 100

int main() {
	int n;
	char *strings[MAX_STRINGS]; // Array of pointers to strings
	char inputString[MAX_LENGTH];
if (scanf("%d", &n) != 1 || n < 1 || n > MAX_STRINGS) {
        return 1;
    }
    
    while (getchar() != '\n'); 
    
    for (int i = 0; i < n; i++) {
        if (fgets(inputString, MAX_LENGTH, stdin) == NULL) {
            for (int j = 0; j < i; j++) free(strings[j]);
            return 1;
        }
        
        size_t len = strlen(inputString);
        if (len > 0 && inputString[len - 1] == '\n') {
            inputString[len - 1] = '\0';
            len--;
        }
        
        strings[i] = (char *)malloc(len + 1);
        if (strings[i] == NULL) {
            for (int j = 0; j < i; j++) free(strings[j]);
            return 1; 
        }
        
        strcpy(strings[i], inputString);
    }
    
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (strlen(strings[j]) > strlen(strings[j + 1])) {
                char *temp = strings[j];
                strings[j] = strings[j + 1];
                strings[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        printf("%s\n", strings[i]);
    }
    
    for (int i = 0; i < n; i++) {
        free(strings[i]);
	}
	return 0;
}
