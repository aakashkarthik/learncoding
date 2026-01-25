#include <stdio.h>

int main(void)
{
	int n;
	printf("what is the value of 'n': ");
	scanf("%d", &n);
	printf("\n");
	
	if(n >= 1 <=10)// the if statement does not calculate if n is between 1 to 10 but will always result in true as the first one will be 0 or 1 mak			//ing the if statement always true.
		printf("n is between 1 and 10\n");
	
	return 0;
}
