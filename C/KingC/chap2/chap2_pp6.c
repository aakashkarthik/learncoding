#include <stdio.h>

int main(void)
{
	int x;
	printf("give an integer value for x:");	
	scanf("%d",&x);
	printf("then '3(x^5) + 2(x^4) - 5(x^3) - x^2 + 7x - 6' is:%d\n",((((3*x + 2) * x-5) * x-1) * x+7) * x-6);
	return 0;
}
