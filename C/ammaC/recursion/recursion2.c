#include <stdio.h>

int string_length(char *ptr)
{
	if(*ptr == '\0')
		return 0;
	else
		return 1 + string_length(++ptr);
}

int main(void)
{
	char string[20] = "what is the time?";
	printf("The length of the string is: %d\n", string_length(string));
	printf("The string is: %s\n", string);
}
