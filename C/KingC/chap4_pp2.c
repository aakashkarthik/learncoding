//this program reverses a three-digit number.
#include <stdio.h>

int main(void)
{
	int number, digit1, digit2, reverse;
	printf("Enter a three-digit number: ");
	scanf("%d", &number);//assumed that the user inputs a three digit number.
	
/*this is extra		if(number > 999)
			{
				return -1;
			} 	to make sure that the user wont type a number lesser than three digits*/
	
	digit1 = number % 10;
	digit2 = number / 10 - number / 100 * 10;
	printf("The reversal is: %.1d%.1d%.1d\n", digit1, digit2, number / 100);
	
	return 0; 
}
