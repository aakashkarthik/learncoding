#include <stdio.h>

int main(void)
{
	float amount;
	printf("please enter a dollar-cents amount:");
	scanf("%f",&amount);
	printf("your amount with 5 percent tax added is:%f\n",(amount * 105.0f)/100.0f);
	return 0;
}
