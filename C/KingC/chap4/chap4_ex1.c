#include <stdio.h>

int main(void)
{
	int i, j, k;

	i = 5; j = 3;
	printf("(a)%d %d", i / j, i % j);/*the result is 1 2*/
	
	i = 2;
	printf("(b)%d", (i + 10) % j);/*the result is 0*/
	
	i = 7; j = 8; k = 9;
	printf("(c)%d", (i + 10) % k / j);/*the result is 1*/
	
	i = 1; j = 2;k = 3;
	printf("(d)%d\n", (i + 5) % (j + 2) / k);/*the result is 0*/
	
	return 0;
}
