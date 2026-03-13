#include <stdio.h>

int main(void)
{
	int i, j;
	
	i = 7;
       	j = i += 1;
	printf("(a) %d %d", i, j);//the result is '8 8'
	
	i = 5;
	j = (i -= 2) + 1;
	printf("(b) %d %d", i, j);//the result is '3 4'
	
	i = 7;
       	j = 6 + (i = 2.5); 
	printf("(c) %d %d", i, j);//the result is '2 8'
	
	i = 2; j = 8;
       	j = (i = 6) + (j = 3);
	printf("(d) %d %d", i, j);//the result is '6 9'
	
	printf("\n");
	return 0;
}
