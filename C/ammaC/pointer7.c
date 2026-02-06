#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char *ptr = (char*) malloc(sizeof(char) * 10);
	char *temp = ptr;
	
	if(ptr == NULL)
	{
		printf("Allocation failed, not enough memory.\n");
		printf("Please try again.\n");
		return 0;
	}
	
	//giving a value of 0 to 9 for the allocated memory.
	char ch = '0';
	for(int k = 0; k < 10; k++)
	{
		ptr[k] = ch++;
	}
	
	for(int i = 0; i < 10; i++)
	{
		printf("%c %c\n", *temp, ptr[i]);
		temp++;
	}
	free(ptr);
	
	return 0;
}
