//this program converts decimal numbers to octal and binary.
#include <stdio.h>

int main(void)
{
	int decimal, binary, octal, conversion;
	printf("do you want to convert from decimal to octal(press '8'),or from decimal to binary(press '2'): ");
	scanf("%1d", conversion);
	
	printf("Enter a positive Decimal number: ");
	scanf("%d", decimal);
	
	if(conversion == 2)
	{
		binary = binary(decimal);
		printf("your number in binary is: %d", binary);
	}
	
	if(conversion == 8)
	{
		octal = octal(decimal);
		printf("Your number in octal is: %d", octal);
	}
	
	return 0;
}

binary(int decimal)
{
	int 
	if(decimal == 0)
	{
		return 0;
	}
	while(decimal != 0 )
	{
		
	}
}
