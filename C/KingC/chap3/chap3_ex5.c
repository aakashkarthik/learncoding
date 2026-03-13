#include <stdio.h>

int main(void)
{
	float x,y;
	int i;
	scanf("%f%d%f", &x, &i, &y);
	printf("x = %f,i = %d,y = %f\n",x,i,y);/*the result of this program if the user typed 12.3 45.6 789 is x = 12.3,i = 45,y = 0.6*/
	return 0;
}
