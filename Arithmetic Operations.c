#include <stdio.h>
int main(){
	int num1, sum, diff, mul, modu;
	unsigned int num2;
	int div;
	printf("");
	scanf("%d %d",&num1, &num2);
	sum = num1+num2;
	diff = num1-num2;
	mul = num1*num2;
	modu = num1%num2;
	div = num1/num2;
	printf("%d\n", sum);
	printf("%d\n", diff);
	printf("%d\n", mul);
	printf("%d\n", div);
	printf("%d\n", modu);
	return 0;
}
