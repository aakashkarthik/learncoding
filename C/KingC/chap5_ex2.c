#include <stdio.h>

int main(void)
{
	int i, j, k;
	i = 10; j = 5;
	printf("(a)%d", !i < j);//the result is '1'
	
	i = 2; j = 1;
	printf("(b)%d", !!i + !j);//the result is'1'
	
	i = 5; j = 0; k = -5;
	printf("(c)%d", i && j || k);//the result is '1'
	
	i = 1; j = 2; k = 3;
	printf("(d)%d", i < j || k);//the result is '1'
	
	return 0;
}
