#include <stdio.h>

int main(void)
{
	int i, n, factorial;
	float e, sum;
	printf("This program approximates the value of the mathematical constant 'e' until the 'n'th term.\n\n");
	printf("Enter the value of n: ");
	scanf("%d", &n);
	
	e = 0;
	for(int j = 1; j <= n; j++)
	{
		sum = 1;
		for(i = 2; i <= j; i++)
			 sum = sum * i;
		
		e += (1/sum);
	}
	
	printf("The value of 'e' until the 'n'th term is: %f\n", e);
}
