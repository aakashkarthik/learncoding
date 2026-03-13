#include <stdio.h>

int main(void)
{
	int dollar;
	printf("Enter a dollar amount:");
	scanf("%d", &dollar);
	printf("$20 bills: %d\n",dollar/20);
	int bdollar = dollar % 20;
	printf("$10 bills: %d\n",bdollar/10);
	int fdollar = bdollar % 10;
	printf(" $5 bills: %d\n",fdollar/5);
	printf(" $1 bills: %d\n",fdollar % 5);
	return 0;
}
