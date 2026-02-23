#include <stdio.h>

int main(void)
{
	int n;
	printf("This program calculates all the even squares from 1 to 'n'.\n\n");
	printf("Enter the value for n: ");
	scanf("%d", &n);
	
	for(int i = 2; i * i <= n; i += 2)
	{
		printf("%d\n", i * i);
	}
	printf("\n");
	
	return 0;
}
