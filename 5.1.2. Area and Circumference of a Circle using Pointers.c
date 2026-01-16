#include<stdio.h>

void area_peri(float, float*, float*);
  
int main() {
float radius, area, circumference;
    
    if (scanf("%f", &radius) != 1) {
        return 1;
    }
    
    area_peri(radius, &area, &circumference);
    
    printf("%.2f\n", area);
    printf("%.2f\n", circumference);
	
	return 0;
}

void area_peri(float r, float *area_ptr, float *peri_ptr) {
const float PI = 3.14;
*area_ptr = PI * r * r;
*peri_ptr = 2 * PI * r;
}
