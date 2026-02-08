#include <stdio.h>

int main(void)
{
	float principal,interestrate,monthlypay, payment;
	int count;
	printf("Enter how many payments you want to check until: ");
	scanf("%d", &count);
	
	printf("Enter amount of loan:");
	scanf("%f", &principal);
	
	printf("Enter interest rate:");
	scanf("%f", &interestrate);
	
	printf("Enter monthly payment:");
	scanf("%f", &monthlypay);
	
	float monthlyrate = interestrate / 12;
	
	payment = ((principal * monthlyrate) / 100) - monthlypay;
	for(int i = 1; i <= count; i++)
	{
		printf("balance remaining after payment%d:%.2f\n",i, principal + payment);
		principal += payment;
		payment = (principal * monthlyrate / 100) - monthlypay;
	}
	
	return 0;
}
