#include <stdio.h>
#include <stdlib.h>

char* stringReverse(char *ptr, int size)
{
	char *reverse = (char*) malloc((sizeof(char) * size) + 1);
	char *ptr2 = reverse;
	for(int k = size - 1; k >= 0; k--)
	{
		*ptr2 = ptr[k];
		ptr2++;
	}
	*ptr2 = '\0';
	
	return reverse;
}

int strlength(char *ptr)
{
	int len = 0;
	while(*ptr != '\0')
	{
		len++;
		ptr++;
	}
	return len;
}

int main(void)
{
	char original[20] = "hello AK";
	printf("Before reverse: %s\n", original);
	

	char *reverse = stringReverse(original, strlength(original));
	printf("Reversed String: %s\n", reverse);

	return 0;
}
