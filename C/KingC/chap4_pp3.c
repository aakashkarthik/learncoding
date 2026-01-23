//this program reverses a three-digit number.
#include <stdio.h>

int main(void)
{
	int digit1, digit2, digit3;
	printf("Enter a three-digit number: ");
	scanf("%1d%1d%1d", &digit3, &digit2, &digit1);
	printf("The reversal is: %.1d%.1d%.1d\n", digit1, digit2, digit3);
	
	return 0; 
}
