#include <stdio.h>

float tax(float income)
{
    float tax;
	if(income < 750.00f)
		tax = 0.01f * income;
	else if(income < 2250)
		tax = 7.50f + 0.02f * income;
	else if(income < 3750)
		tax = 37.50f + 0.03f * income;
	else if(income < 5250)
		tax = 82.50f + 0.04f * income;
	else if(income < 7000)
		tax = 142.50f + 0.05f * income;
	else
		tax = 230.00f + 0.06f * income;
	
	return tax;
}

int main(void)
{
	float income;
	printf("Enter the amount of taxable income in ($_): ");
	scanf("$%f", &income);
	
	printf("The tax due is: %f\n", tax(income));
}
