#include <stdio.h>

int factorial(int n)
{
	if(n <= 0)
		return 0;
	else if(n == 1)
		return 1;
	else
		return n * factorial(n - 1);
}

int main(void)
{
	int number, f;
	printf("what number do you want to find the factorial of: ");
	scanf("%d", &number);
	
	f = factorial(number);
	printf("%d\n", f);
}
