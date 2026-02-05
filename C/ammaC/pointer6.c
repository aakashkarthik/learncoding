#include <stdio.h>

void nameReverse(char *begin, int size)
{
	char *end = begin + (size - 1);
	for(int i = 1; i <= size/2; i++)
	{
		char temp = *end;
		*end = *begin;
		*begin = temp;
	       	end--;
	       	begin++;
	}
	
	return;
}

int main(void)
{
	char name[7] = {' ','A','a','k','a','s','h'};
	char *ptr = name;

	nameReverse(ptr, 7);

	for(int i = 0; i < 7; i++)
	{
		printf("%c", *ptr);
		ptr++;
	}
	printf("\n");
	
	return 0;
}
