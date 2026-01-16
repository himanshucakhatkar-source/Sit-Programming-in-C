#include <stdio.h>

union test {
	int x;
	int y;
};
union test u;
int input_x, input_y;

int main()
{
	
	printf("x: ");
	scanf("%d", &input_x);
u.x = input_x;
	
	
	printf("After making x = %d:\nx= %d y= %d\n", input_x, u.x, u.y);
	printf("y: ");
scanf("%d", &input_y);
u.y = input_y;



	printf("After making y = %d:\nx= %d y= %d", input_y, u.x, u.y);
 	return 0;
}
