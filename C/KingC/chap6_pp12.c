#include <stdio.h>

int main(void)
{
	int i, factorial;
	float e, sum, n;
	printf("This program approximates the value of the mathematical constant 'e' until it is just below 'n'.\n\n");
	printf("Enter the value of n: ");
	scanf("%f", &n);
	if(n >= 2)
	{
		printf("INVALID value for 'n' as e is below 2.\n");
		printf("please try again.\n");
		return 1;
	}
	
	e = 0;
	for(int j = 1; e <= n; j++)
	{
		sum = 1;
		for(i = 2; i <= j; i++)
			 sum = sum * i;
		
		e += (1/sum);
	}
		e -= (2/sum);
	
	printf("The value of 'e' until the 'n'th term is: %f\n", e);
}
