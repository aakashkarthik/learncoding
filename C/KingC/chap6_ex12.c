#include <stdio.h>

int main(void)
{
	int d, n;
	
	printf("this program computes if the number you entered is prime or not.\n\n");
	printf("Enter a number: ");
	scanf("%d", &n);
	
	for(d = 2; d * d <= n; d++)
	{
		if(n % d == 0)
		{
		break;
		}
		
		else
		printf("the number %d is prime.\n", n);
	}
	
	if(d * d == n)
	printf("the number %d is divisible by %d\n", n, d);
	
	return 0;
}
