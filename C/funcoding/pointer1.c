#include<stdio.h>

int main(void)
{
        int a = 5;
	printf("Value of a before change = %d\n", a);

	int *ptr = &a;
	printf("Value of content in ptr = %d\n",   *ptr);

	a = 10;
	*ptr = 15;

	printf("Value of a after change = %d\n", a);
	printf("Value of content in ptr = %d\n",   *ptr);

	printf("Value of ptr = %p\n",  ptr);
	
	return 0;
}
