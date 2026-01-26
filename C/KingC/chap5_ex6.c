#include <stdio.h>

int main(void)
{
	int n;
	printf("what is the value of 'n': ");
	scanf("%d", &n);
	printf("\n");
	
	if(n == 1-10)//the following program tests if n is -9(so it is legal), as it is 1 - 10.
		printf("n is between 1 and 10\n");
	
	return 0;
}
