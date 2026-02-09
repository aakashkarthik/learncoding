#include <stdio.h>

int main(void)
{
	int n, factorial, i;
	float e;
	printf("This program approximates the value of the mathematical constant 'e' until the 'n'th term.\n\n");
	printf("Enter the value of n: ");
	scanf("%d", &n);
	
	e = 0;
	for(int j = 1; j <= n; j++)
	{
		for(i = j; i > 1; )
		{
			 i = i * (--i);
		}
		
		e += j/i;
	}
	
	printf("The value of 'e' until the 'n'th term is: %f\n", e);
}
