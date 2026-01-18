#include <stdio.h>

int main(void)
{
	int numbers, start1, start2, start3;
	printf("how many numbers in the fibonacci sequence do you want to see: ");
	scanf("%d", &numbers);
	if(numbers < 0)   /* to make sure that the user doesn't type a negative numbers*/
	{		   
		return 7;  
	}		   
	
	start1 = -1;
	start2 = 1;

	for( ;numbers > 0;numbers--, start1 = start2, start2 = start3)/* the 'numbers--' makes it tell the no. of digits to print */
	{							       /* the start3 is the only number that is printed */
		start3 = start2 + start1;				/* the start1 and start2 will be added to form start3 */
		printf("%d, ",start3);					/* the start1 is made start2 and start2 is made start3 every time */
		printf("\n");
	}

	return 0;
}
