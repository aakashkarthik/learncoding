//this program reverses a two digit number.
#include <stdio.h>

int main(void)
{
	int number, digit1, reverse;
	printf("Enter a two-digit number: ");
	scanf("%d", &number);//assumed that the user inputs a two digit number.
	
/*this is extra		if(number > 99)
			{
				return -1;
			} 	to make sure that the user wont type a number lesser than two digits*/
	
	digit1 = number % 10;
	printf("The reversal is: %.1d%.1d\n", digit1, (number - digit1) / 10);
	
	return 0; 
}
