#include <stdio.h>

// Define a simple structure for Student
struct Student {
	char name[50];
	float marks1, marks2, marks3, marks4, marks5;
	float cgpa;
};

// Function to calculate CGPA
float getCGPA(float m1, float m2, float m3, float m4, float m5) {
	float total_marks = m1 + m2 + m3 + m4 + m5;
    
    // CGPA = (Total marks / 500) * 5.0
    float cgpa_value = (total_marks / 500.0) * 5.0;
    
    return cgpa_value;
}

// Function to print class based on CGPA
void printClass(float cgpa) {
	printf("Class: ");
    
    if (cgpa >= 4.5) {
        printf("First Class\n");
    } else if (cgpa >= 3.5) { // and < 4.5
        printf("Second Class\n");
    } else if (cgpa >= 2.5) { // and < 3.5
        printf("Third Class\n");
    } else { // CGPA < 2.5
        printf("Fail\n");
	}
}

int main() {
	struct Student s;
	fgets(s.name, sizeof(s.name), stdin);
	scanf("%f %f %f %f %f", &s.marks1, &s.marks2, &s.marks3, &s.marks4, &s.marks5);
	s.cgpa = getCGPA(s.marks1, s.marks2, s.marks3, s.marks4, s.marks5);
	printf("Transcript\n");
	printf("Name: %s", s.name);
	printf("CGPA: %.2f\n", s.cgpa);
	printClass(s.cgpa);
	return 0;
}
