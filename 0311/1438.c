#include <stdio.h>
int Factorial(int x);
int main()
{   int x;
    while (1)	
    {  printf("Please input x(-1 to quit):");
    	 scanf("%d", &x);
       if (x == -1)  break;
       else
          printf("The factorial of %d is %d.\n", x, Factorial(x));
    }
}
int Factorial(int x)
{   int i, result=1;
    for (i=1; i<=x; i++)
       result *= i;
    return result;
}


