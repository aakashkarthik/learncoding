#include <stdio.h>

int main(void)
{
	int i, j, k;
	i = 2; j = 3;
	k = i * j == 6;
	printf("(a)%d", k);//the result is '1'
	
	i = 5; j = 10; k = 1;
	printf("(b)%d", k > i < j);//the result is'1'
	
	i = 3; j = 2; k = 1;
	printf("(c)%d", i < j == j < k);//the result is '1'
	
	i = 3; j = 4; k = 5;
	printf("(d)%d", i % j + i < k);//the result is ''
	
	return 0;
}
