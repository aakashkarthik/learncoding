#include <stdio.h>
#include <stdbool.h>
int main(void)
{
	int age;
	bool teenager;
	teenager = age >= 13 && age <= 19 ? true : false;
	printf("teenager: %d", teenager);
	
	return 0;
}
