#include <stdio.h>
#include <stdlib.h>

char* stringReverse(char *ptr, int size)
{
	char *ptr2 = (char*) malloc(sizeof(char) * size);
	ptr2 += size - 1;
	for(int k = 1; k <= size; k++)
	{
		*ptr2 = *ptr;
		ptr++;
		ptr2--;
	}
	ptr2++;
	
	return ptr2;
}

int main(void)
{
	char *ch = (char*) malloc(10);
	char *temp = ch;
	
	char c = 'a';
	for(int j = 1; j < 10; j++, c++)
	{
		*temp = c;
		*temp++;
	}
	
	char *reverse = stringReverse(ch, 10);
	for(int i = 0; i < 10; i++)
	{
	printf("%c ", *reverse);
	reverse++;
	}
	printf("\n");
	free(ch);
	
	return 0;
}
