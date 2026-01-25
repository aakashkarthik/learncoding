//this program converts decimal numbers to octal and binary.
#include <stdio.h>

int converter(int decimal,int base)
{
	int digit[10] = {0};
	int i = 0;
	while(decimal != 0)
	{
		digit[i] = decimal % base;
		decimal /= base;
		i++;
	}
	for(int j = i - 1; j >= 0; j--)
	{
		printf("%d", digit[j]);
	}
	printf("\n");
}

int main(void)
{
	int decimal, base, conversion;
	printf(" NOTE: this program can convert decimal to any base below 10!\n");
	printf("to convert from decimal(base 10) to base_(press the base number to which you want to convert to): ");
	scanf("%1d", &conversion);
	
	printf("Enter a positive Decimal number: ");
	scanf("%d", &decimal);
	
 	converter(decimal, conversion);
	return 0;
}
