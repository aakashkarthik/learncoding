#include <stdio.h>

int main(void)
{
	int wind, force;
	printf("Enter a wind speed(in knots): ");
	scanf("%d", &wind);
	
	if(wind < 1)
		printf("Calm\n");
	else if(wind >= 1 && wind <= 3)
		printf("Light air\n");
	else if(wind >= 4 && wind <= 27)
		printf("Breeze\n");
	else if(wind >= 28 && wind <= 47)
		printf("Gale\n");
	else if(wind >= 48 && wind <= 63)
		printf("Storm\n");
	else 
		printf("Hurricane");
	
	return 0;
}	
