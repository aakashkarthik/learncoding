#include <stdio.h>

int main(void)
{
	int digit, sum;
	unsigned long long num;
	printf("Enter a number: ");
	scanf("%lld", &num);
	
	while(num != 0)
	{
		digit = num % 10;
		sum += digit;
		num /= 10;
	}
	
	printf("The digit sum of the number is: %d\n", sum);
	
	return 0;
}
