#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	for(int i = 10; i >= 1; i /= 2)
	{
		printf("%d\n", i++);
		//this will result in a infinite loop as the program stays at one and does not go lesser.
	}
	
	return 0;
}
