#include <stdio.h>

int main(void)
{
	int n, digit;
	printf("Enter a number lesser than four digits: ");
	scanf("%4d", &n);
	printf("\n");
	
	if(n >= 0 && n <=9)
	{
		digit = 1;
	}
	else if(n <=99)
	{
		digit = 2;
	}
	else if(n <=999)
	{
		digit = 3;
	}
	else
	{
		digit = 4;
	}
	if(digit == 1)
	{
		printf("The number %d has %d digit.\n", n, digit);
	}
	else
	{
	printf("The number %d has %d digits.\n", n, digit);
	}
}
