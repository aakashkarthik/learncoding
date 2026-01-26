#include <stdio.h>

int main(void)
{
	int i;
	printf("what is the value of 'i': ");
	scanf("%d", &i);
	printf("\n");
	printf("%d\n", i >= 0 ? i : -i);//this basically prints the absolute value of i(meaning the positive of i).
	
	return 0;
}
