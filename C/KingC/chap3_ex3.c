#include <stdio.h>

int main(void)
{
	int a, b, c, d, e, f;
	float w, x, y, z;
	printf("(a)enter 2 numbers seperated by a comma: ");
	scanf("%d, %d", &a, &b);
	printf("%d,%d\n", a, b);
	
	printf("(b)enter 6 numbers seperated by minus signs and a comma seperating three by three: ");
	scanf("%d-%d-%d,%d -%d -%d", &a, &b, &c, &d, &e, &f);
	printf("%d,%d,%d & %d,%d,%d\n", a, b, c, d, e, f);
	
	printf("(c)enter 2 floats seperated by a comma: ");
	scanf("%f,%f ", &x, &y);
	printf("%f,%f\n", x, y);
	
	printf("(d)enter 4 float integers seperated by commas and seperted two by two by an anderson: ");
	scanf("%f,%f & %f, %f ", &w, &x, &y, &z);
	printf("%f,%f & %f,%f\n", w, x, y, z);
	
	// all are equivalent.
	return 0;
}
