#include <stdio.h>

int main(void)
{
	float largest,user;
	printf("this program prints the largest non-negative number you have entered.\n\n");
	largest = 0;
	user = 1;
	while(user > 0)
	{
		printf("Enter a number: ");
		scanf("%f", &user);
		if(largest == 0)
		{
			largest = user;
		}
		else if(largest >= user)
		{}
		else
		{
			largest = user;
		}
	}
	printf("\n");
	printf("the largest number entered was %f\n", largest);
	
	return 0;
}
