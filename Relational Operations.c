#include <stdio.h>

int main() {
	int n1, n2;
	printf("Enter two numbers: ");
	scanf("%d %d", &n1, &n2);

	// The relational and equality comparisons
	printf("%d < %d: %s\n", n1, n2, (n1 < n2) ? "True" : "False");
	printf("%d <= %d: %s\n", n1, n2, (n1 <= n2) ? "True" : "False");
	printf("%d > %d: %s\n", n1, n2, (n1 > n2) ? "True" : "False");
	printf("%d >= %d: %s\n", n1, n2, (n1 >= n2) ? "True" : "False");
	printf("%d == %d: %s\n", n1, n2, (n1 == n2) ? "True" : "False");
	printf("%d != %d: %s\n", n1, n2, (n1 != n2) ? "True" : "False");

	return 0;
}
