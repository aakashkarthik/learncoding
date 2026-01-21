#include <stdio.h>

int main(void)
{
	printf("(a)%d (b)%d (c)%d (d)%d \n", 8 / 5, -8 / 5, 8 / -5, -8 /-5);//the result where 1 with unary signs difference a+,b-,c-,d+
	printf("(a)%d (b)%d (c)%d (d)%d \n", 8 % 5, -8 % 5, 8 % -5, -8 % -5);//the result where 3 with unary signs difference a+,b-,c+,d-
	
	return 0;
}
