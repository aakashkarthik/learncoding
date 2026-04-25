#include <stdio.h>

void pay_amount(int dollar, int *twenties, int *tens, int *fives, int *ones)
{
    *twenties = dollar / 20;
    int remove_twenty = dollar % 20;
    *tens = remove_twenty / 10;
    int remove_ten = remove_twenty % 10;
    *fives = remove_ten / 5;
    *ones = remove_ten % 5;
}

int main(void)
{
	int dollar, twenties = 0, tens = 0, fives = 0, ones = 0;
	printf("Enter a dollar amount: ");
	scanf(" %d", &dollar);
    pay_amount(dollar, &twenties, &tens, &fives, &ones);
	printf("$20 bills: %d\n", twenties);
	printf("$10 bills: %d\n", tens);
	printf(" $5 bills: %d\n", fives);
	printf(" $1 bills: %d\n", ones);
    
	return 0;
}
