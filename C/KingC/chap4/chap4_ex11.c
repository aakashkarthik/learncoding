#include <stdio.h>

int main(void)
{
	int i, j, k;

	i = 1;
	printf("(a1) %d", i++ - 1);//the result is '0'
	printf("(a2) %d", i);//the result is '2'
	
	i = 10; j = 5;
	printf("(b1) %d", i++ - ++j);//the result is '4'
	printf("(b2) %d %d", i, j);//the result is '11 6'
	
	i = 7; j = 8;
	printf("(c1) %d", i++ - --j);//the result is '0'
	printf("(c2) %d %d", i, j);//the result is '8 7'

	i = 3; j = 4; k = 5;
	printf("(d1) %d", i++ - j++ + --k);//the result is '3'
	printf("(d2) %d %d %d", i, j, k);//the result is '4 5 4'

	printf("\n");
	return 0;
}
