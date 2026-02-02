#include <stdio.h>

int main(void)
{
	int a = 5, b = 23, c = 38;
	int *ptr = &a;
	printf("the value ptr is pointing to now: %d\n", *ptr);
	
	ptr++;
	printf("the value ptr is pointing to now: %d\n", *ptr);
	
	ptr++;
	printf("the value ptr is pointing to now: %d\n", *ptr);

	ptr++;
	printf("the value ptr is pointing to now: %d\n", *ptr);
	return 0;
}
