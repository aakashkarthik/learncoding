#include <stdio.h>

int main(void)
{
	for(int count = 5, i, j, sum; count > 0; count--)
	{
		end :
		printf("Enter the values of two integers to add (seperated by space) :  ");
		scanf("%d %d", &i, &j);
		
		if(i < 0 || j < 0)
		{
			printf("this program only calculates the sum of positive integers for 'count' number of times.\n");
			printf("please try again.\n");
			goto end;
		}
		
		sum = i + j;
		printf("the sum is: %d\n", sum);
	}


}
