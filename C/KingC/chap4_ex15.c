#include <stdio.h>

int main(void)
{
	int i = 1, j = 2;
	
	i += j;
	printf("(a)%d %d\n", i, j);//the value is"3 2"
	i -= j;
	
	i--;
	printf("(b)%d %d\n", i, j);//the value is"0 2"
	i++;
	
	i * j / i;
	printf("(c)%d %d\n", i, j);//the value is"1 2"
	i / j * i;
	
	i % ++j;
	printf("(a)%d %d\n", i, j);//the value is "1 3"
	
	return 0;
}
