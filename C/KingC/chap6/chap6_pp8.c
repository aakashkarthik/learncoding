#include <stdio.h>

int main(void)
{
	int n,day;
	printf("Enter number of days in the month: ");
	scanf("%d", &n);
	printf("Enter the starting day of the week(1 = Sun, 7 = Sat): ");
	scanf("%d", &day);
	printf("\n");
	
	printf(" %*d ", day * 2 + 1, 1);// to get the starting of the month.
	for(int i = 2; i <= n; i++)
	{
		if(day == 7)
		{
			printf("\n");
			day = 0;
		}
		printf("%2d ", i);
		day++;
	}
	printf("\n");
	
	return 0;
}
