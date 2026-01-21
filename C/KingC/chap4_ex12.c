#include <stdio.h>

int main(void)
{
	int i, j;
	
	i = 5;
       	j = ++i * 3 - 2;
	printf("(a) %d %d", i, j);//the result is '6 16'
	
	i = 5;
	j = 3 - 2 * i++;
	printf("(b) %d %d", i, j);//the result is '6 -7'
	
	i = 7;
       	j = 3 * i-- + 2; 
	printf("(c) %d %d", i, j);//the result is '6 23'
	
	i = 7;
       	j = 3 + --i * 2;
	printf("(d) %d %d", i, j);//the result is '6 15'
	
	printf("\n");
	return 0;
}
