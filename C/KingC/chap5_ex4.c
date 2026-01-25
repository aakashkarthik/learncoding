#include <stdio.h>

int main(void)
{
	int i, j;
	printf("what is the is the value of 'i': ");
	scanf("%d", &i);
	printf("\n");
	printf("what is the is the value of 'j'");
	scanf("%d", &j);
	printf("\n");
	
	printf("%d\n", i < j ? -1 : i == j ? 0 : 1);
	
	return 0;
}
