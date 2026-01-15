#include <stdio.h>

#define PI 3.14f

int main(void)
{
	float r;
	printf("please enter a float(a number with decimal points)as the radius:");
	scanf("%f", &r);
	float volume1= 4.0f/3.0f * PI * r * r * r;
	printf("Volume in cubic metres:%f\n",volume1);
	return 0;
}
