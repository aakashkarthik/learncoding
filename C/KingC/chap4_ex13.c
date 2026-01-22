#include <stdio.h>

int main(void)
{
	int i, j, k, l;
	printf("what is the value of 'i'for the following operations: ");
	scanf("%d", &i);
	i += 1;
	printf("now doing i += 1 : %d\n", i);
	j = i;
	printf("reverting'i'\n");
	i -= 1;
	
	i++;
	printf("now doing i++ : %d\n", i);
	k = i;
	printf("reverting 'i'\n");
	i--;
	
	++i;
	printf("now doing ++i : %d\n", i);
	l = i;
	printf("reverting 'i'\n");
	--i;
	//'i += 1' is same as 
	//++i because in "i += 1, i = 1 first happens then it is substituted to i" so as ++i does it earlier than the rest of the operations"
	
	return 0;
}
