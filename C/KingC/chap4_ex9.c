#include <stdio.h>

int main(void)
{
	int i, j, k;

	i = 7; j = 8;
	i *= j + 1;
	printf("(a) %d %d", i, j);//the result is '63 8'
	
	i = j = k = 1;
	i += j += k;
	printf("(b) %d %d %d", i, j, k);//the result is '1 2 3'
	
	i = 1; j = 2; k = 3;
	i -= j -= k;
	printf("(c) %d %d %d", i, j, k);//the result is '2 -1 3'

	i = 2; j = 1; k = 0;
	i *= j *= k;
	printf("(d) %d %d %d", i, j, k);//the result is '0 0 0'

	printf("\n");
	return 0;
}
