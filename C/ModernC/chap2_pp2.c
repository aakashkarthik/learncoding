#include <stdio.h>

#define PI 3.14f

int main(void)
{
	float r= 10.0;
//	float volume1= 4/3 * PI * r * r * r;
	float volume2= 4.0f/3.0f * PI * r * r * r;
//	printf("Volume in cubic metres(4/3):%f\n",volume1);
	printf("Volume in cubic metres:%f\n",volume2);
//	printf("Volume in cubic metres(4/3):%d\n",4/3);
//	printf("Volume in cubic metres(4.0f/3.0f):%f\n",4.0f/3.0f);
	return 0;
}
