#include <stdio.h>
#include <stdbool.h>

bool string_compare(char *ptr1, char *ptr2)
{
	while(*ptr1 != '\0' || *ptr2 != '\0')
	{
		if(*ptr1 != *ptr2)
			return false;
		else
		{
			ptr1++;
			ptr2++;
		}
	}
	if(*ptr1 == '\0' && *ptr2 == '\0')
		return true;
	else
		return false;

}

int main(void)
{
	char string[30] = "what is the time today?";
	char string2[30] = "what is the time today?";
	if(string_compare(string, string2))
		printf("The two strings do match.\n");
	else
		printf("The two strings don't match.\n");

}
