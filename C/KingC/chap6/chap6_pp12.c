#include <stdio.h>

int main(void)
{
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
    sum = 1;
	for(int j = 1; e < n; j++)
	{
		sum = sum * j;
		e += (1/sum);
	}
		e -= (1/sum);
	
	printf("The value of 'e' until it is below n is: %f\n", e);
}
