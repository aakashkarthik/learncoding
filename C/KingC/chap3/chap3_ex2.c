#include <stdio.h>

int main(void)
{
	float x = 123.456789;
	printf("|%8.1e|",x);
	printf("|%-10.6e|",x);
	printf("|%8.3f|",x);
	printf("|%-6.0f|\n",x);
	return 0;
}
