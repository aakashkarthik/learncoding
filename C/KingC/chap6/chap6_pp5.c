//this program reverses a two digit number.
#include <stdio.h>

int main(void)
{
	int number, digit, reverse;

	printf("Enter a number: ");
	scanf("%d", &number);
	
	do
	{
	digit = number % 10;
	printf("The reversal is: %.1d%.1d\n", digit, number / 10);
	digit /= 10;
	}while(digit != 0);
	
	return 0; 
}
