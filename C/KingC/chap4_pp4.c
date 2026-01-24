//this program converts a decimal number between 0 to 32767 to octal.(look down if you want to know why 32767)
#include <stdio.h>

int main(void)
{
	int decimal, decimal2, decimal3, decimal4, decimal5, octal5, octal4, octal3, octal2, octal1;
	
	printf("Enter a number between 0 to 32767: ");//32767 is chosen as it is the highest 5 digit number in octal which is 77777.
	scanf("%d", &decimal);
	
	octal5 = decimal % 8;
	decimal2 = decimal / 8;

	octal4 = decimal2 % 8;
	decimal3 = decimal2 / 8;
	
	octal3 = decimal3 % 8;
	decimal4 = decimal3 / 8;
	
	octal2 = decimal4 % 8;
	decimal5 = decimal4 / 8;
	
	octal1 = decimal5 % 8;
	
	printf("Your number in octal is: %d%d%d%d%d\n", octal1, octal2, octal3, octal4, octal5);
}
