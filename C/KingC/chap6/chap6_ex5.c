//the answer to question 5 is (c)"the do while" as it executes the body one more time.
#include <stdio.h>

int main(void)
{
	int i = 10;
	printf("(A)");
	while(i < 10)
	{
		printf("%d ", i);
		i++;
	}
	printf("\n");
	
	printf("(B)");
	for(;i < 10;)
	{
		printf("%d ", i);
		i++;
	}
	printf("\n");
	
	printf("(C)");
	do
	{
		printf("%d ", i);
		i++;
	}while(i < 10);
	printf("\n");
}
