#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int first, second, third, min = 0, max = 999, random_number;
	printf("now generating a random number,\n");
	srand(time(NULL));/*makes the random number number generation different every time*/
	random_number = min + rand() % (max - min + 1);/*generates a random number*/
	third = random_number % 10;
	second = (random_number % 100) - third;
	first = (random_number % 1000) - (random_number % 100);
	printf("setting random to 0\n");
	printf("setting its digit copies to 0\n");
	random_number = 0;
	printf("now finding out what that random number is...\n ");
	
	int i, j, k;
	for(i = 10;i > 0;i--)
	{
		for(j = 10;j > 0;j--)
		{
			for(k = 10;k > 0;k--)
			{
				if(k == third)
				{
					break;
				}
			}
		if(j == second)
		{
			break;
		}
			
		}
	if(i == first)
	{
		break;
	}
	}
	third = 0;
	second = 0;
	first = 0;
	
	printf("so the random number is %d%d%d\n", i, j, k);
	
	return 0;
}
