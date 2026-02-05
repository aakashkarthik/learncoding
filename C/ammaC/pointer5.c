#include <stdio.h>

void nameChange(char *inputName)
{
	char *temp = inputName;
	*temp = 'P';
	temp++;
	*temp = 'r';
	return;
}

int main(void)
{
	char name[7] = {' ','A','a','k','a','s','h'};
	char *ptr = name;

	nameChange(ptr);

	for(int i = 0; i < 7; i++)
	{
		printf("%c", *ptr);
		ptr++;
	}
	printf("\n");
	
	return 0;
}
