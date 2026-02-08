#include <stdio.h>
#include <stdbool.h>

bool string_compare(char *ptr1, char *ptr2)
{
	if(*ptr1 == '\0' && *ptr2 == '\0')
		return true;
	if(*ptr1 != *ptr2)
		return false;
	else
		string_compare(++ptr1, ++ptr2);
}

int main(void)
{
	char string[50] = "what is the time today, Aakash?";
	char string2[50] = "what is the time today?";
	if(string_compare(string, string2))
		printf("The two strings do match.\n");
	else
		printf("The two strings don't match.\n");

}
