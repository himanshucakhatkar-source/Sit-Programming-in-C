#include <stdio.h>
int factorial(int n)
{
    // Base Case: If n is 0, the factorial is 1.
    if (n == 0) {
        return 1;
    }
    
    // Recursive Step: n * factorial(n - 1)
    return n * factorial(n - 1);

}
int main()
{
   int T, no;
   scanf("%d",&T);
   while(T--)
   {
     scanf("%d",&no);
     printf("%d\n",factorial(no));
   }
 return 0;
}
