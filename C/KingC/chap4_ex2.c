#include <stdio.h>

int main(void)
{
	int i, j;
	
	printf("enter two positive numbers for i and j(seperated by a comma): ");
	scanf("%d,%d", &i, &j);
	printf("(-i) / j is %d\n", (-i) / j);
	printf("-(i / j) is %d\n", -(i / j));//both results are same and are always rounded towards the next number even if it is actually just 1 more.
	
	return 0;
}
