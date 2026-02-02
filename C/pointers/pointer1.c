#include <stdio.h>

int main(void)
{
	int a = 24;
	printf("The value of a is: %d\n", a);//first part of the program.
	
	int *ptr = &a;
	printf("The value of ptr: %p\n", ptr);
	printf("the value ptr is pointing to: %d\n", *ptr);//the second part of the program.
	
	char b = 'f';
	char *ptr2 = &b;
	printf("the value ptr2 is pointing to: %c\n", *ptr2);//the third part of the program.
	
	return 0;
}
