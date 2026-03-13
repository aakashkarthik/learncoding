#include <stdio.h>

int main(void)
{
	float principal,interestrate,monthlypay;
	printf("Enter amount of loan:");
	scanf("%f", &principal);
	printf("Enter interest rate:");
	scanf("%f", &interestrate);
	printf("Enter monthly payment:");
	scanf("%f", &monthlypay);
	float monthlyrate = interestrate / 12;
	float fpayment = ((principal * monthlyrate) / 100) - monthlypay;
	printf("balance remaining after first payment:%.2f\n",principal + fpayment);
	float spayment = (((principal + fpayment) * monthlyrate) / 100) - monthlypay;
	printf("balance remaining after second payment:%.2f\n",(principal + fpayment) + spayment);
	float tpayment = ((((principal+fpayment) + spayment) * monthlyrate) / 100) - monthlypay;
	printf("balance remaining after third payment:%.2f\n",((principal + fpayment) + spayment) + tpayment);
	return 0;
}
