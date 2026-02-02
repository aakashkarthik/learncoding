#include <stdio.h>

int main(void)
{
	char age[6] = {'A','a','k','a','s','h'};
	char *ptr = age;

	for( int i = 0; i < 6; i++ )
	{
		printf("%c", *ptr);
		ptr++;
	}
	printf("\n");
	
	return 0;
}
