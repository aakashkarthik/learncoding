#include <stdio.h>

int main(void)
{
	int i;
	for(i = 0; i < 10; i++)
		printf("%d", i);
	for(i = 0; i < 10; ++i)
		printf("%d", i);
	for(i = 0; i++ < 10;)//this is the odd one out, as it will increment i before entering the body.
		printf("%d", i);
	
	return 0;
}
