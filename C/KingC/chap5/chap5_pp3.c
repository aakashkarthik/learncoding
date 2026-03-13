#include <stdio.h>

int main(void)
{
	float share, pershare, commission, commission2, value;
	
	printf("Enter the number of shares in the trade: ");
	scanf("%f", &share);
	printf("Enter value of each share in US dollars: ");
	scanf("%f", &pershare);
	
	
	if(share < 2000.00f)
	{
		commission2 = 33.00f + 0.03f * share;
	}
	else
	{
		commission2 = 33.00f + 0.02f * share;
	}

	value = share * pershare;
	
	if(value < 2500.00f)
	{
		commission = 30.00f + 0.017f * value;
	}
	else if(value < 6250.00f)
	{
		commission = 56.00f + 0.0066f * value;
	}
	else if(value < 20000.00f)
	{
		commission = 76.00f + 0.0034f * value;
	}
	else if(value < 50000.00f)
	{
		commission = 100.00f + 0.0022f * value;
	}
	else if(value < 500000.00f)
	{
		commission = 155.00f + 0.0011f * value;
	}
	else
	{
		commission = 255.00f + 0.0009 * value;
	}
	
	if(commission < 39.00f)
	{
		commission = 39.00f;
	}
	
	printf("The original broker's commission: %.2f\n", commission);
	printf("The rival brokers's commission: %.2f\n", commission2);
	
	return 0;
}
