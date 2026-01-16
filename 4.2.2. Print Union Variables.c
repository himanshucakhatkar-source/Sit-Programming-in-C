#include <stdio.h>

// Enum to track the type of data stored in the union
enum Type {
    INTEGER,
    FLOATING_POINT
};

// Union definition
union Data {
	int integer;
	float floating_point;
};

struct Variable {
    enum Type type;  // Type tracker
    union Data value; // Storage for int or float
};

int main() {
    struct Variable var1, var2;
    int input_int;
    float input_float;
   
    if (scanf("%d", &input_int) != 1) return 1;

    var1.value.integer = input_int;
    var1.type = INTEGER;
    
    while (getchar() != '\n' && !feof(stdin));
   
    if (scanf("%f", &input_float) != 1) return 1;

    var2.value.floating_point = input_float;
    var2.type = FLOATING_POINT;

    if (var1.type == INTEGER) {
        printf("%d\n", var1.value.integer); 
    } else if (var1.type == FLOATING_POINT) {
        printf("%.1f\n", var1.value.floating_point); 
    }
   
    if (var2.type == INTEGER) {
        printf("%d\n", var2.value.integer);
    } else if (var2.type == FLOATING_POINT) {
        printf("%.1f\n", var2.value.floating_point);
	}
	return 0;
}
