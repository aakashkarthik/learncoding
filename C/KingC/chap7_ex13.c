#include <stdio.h>

int main(void)
{
	char c = '\1';
    short s = 2;
    int i = -3;
    long m = 5;
    float f = 6.5f;
    double d = 7.5;
    
    printf("The value of c * d is: %d\n", c * i);
    printf("The value of s + m is: %ld\n", s + m);
    printf("The value of f / c is: %f\n", f / c);
    printf("The value of d / s is: %f\n", d / s);
    printf("The value of f - d is: %f\n", f - d);
    printf("The value of (int)f is: %d\n", (int) f);
    
    return 0;
}
