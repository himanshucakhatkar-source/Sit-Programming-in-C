#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;
    double discriminant, root1, root2;
    double realPart, imagPart;

    printf("Enter coefficients a, b and c: ");

    if (scanf("%lf %lf %lf", &a, &b, &c) != 3) {
        fprintf(stderr, "Invalid input format.\n");
        return 1;
    }
    
    if (a == 0) {
        if (b != 0) {
             root1 = -c / b;
             printf("Not a quadratic equation (a=0). Linear root: %.2f\n", root1);
        } else if (c == 0) {
            printf("Infinite solutions (0 = 0)\n");
        } else {
            printf("No solution (e.g., 5 = 0)\n");
        }
        return 0;
    }

    discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("root1 = %.2f and root2 = %.2f\n", root1, root2);
    }
    else if (discriminant == 0) {
        root1 = -b / (2 * a);
        printf("root1 = root2 = %.2f\n", root1);
    }
    else {
        
        realPart = -b / (2 * a);
        imagPart = sqrt(-discriminant) / (2 * a);
        
        if (imagPart < 0) {
            imagPart = -imagPart;
        }

        printf("root1 = %.2f+%.2fi and root2 = %.2f-%.2fi\n", realPart, imagPart, realPart, imagPart);
    }

    return 0;
}




