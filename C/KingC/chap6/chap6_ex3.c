#include <stdio.h>

int main(void)
{
	for(int i = 5, j = i - 1; i > 0,j > 0; --i, j = i, i - 1)
		printf("%d", i);
	//I think j has no use.
}
