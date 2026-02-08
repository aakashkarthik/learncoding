#include <stdio.h>

int string_length(char *ptr)
{
	int count = 0;
	
	while(*ptr != '\0')
	{
		count++;
		ptr++;
	}
	
	return count;
}

int main(void)
{
	char string[20] = "what is the time?";
	printf("The length of the string is: %d\n", string_length(string));
	printf("The string is: %s\n", string);
}
