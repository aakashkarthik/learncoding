#include <stdio.h>

int main(void)
{
	int i, j, k;
	i = 3; j = 4; k = 5;
	printf("(a)%d", i < j || ++j < k);//the result is '1'
	printf("%d %d %d", i, j, k);//the result is '3 4 5'
	
	i = 7; j = 8;k = 9;
	printf("(b)%d", i - 7 && j++ < k);//the result is '0'
	printf("%d %d %d", i, j, k);//the result is '7 8 9'
	
	i = 7; j = 8;k = 9;
	printf("(c)%d", (i == j) || (j == k));//the result is '0'
	printf("%d %d %d", i, j, k);//the result is '7 8 9'
	
 	i = 1; j = 1; k = 1;
	printf("(d)%d", ++i || ++j && ++k);//the result is '1'
	printf("%d %d %d", i, j, k);//the result is '2 1 1'
	i = 1; j = 1; k = 1;
	
	return 0;
}
