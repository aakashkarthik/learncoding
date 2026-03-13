#include <stdio.h>

int main(void)
{
    double sum, d;
    
    printf("This program sums a series of doubles(decimals).\n");
    printf("Enter doubles (0 to terminate): ");
    
    scanf("%lf", &d);
    while(d != 0)
    {
        sum += d;
        scanf("%lf", &d);
    }
    printf("The sum is: %f\n", sum);
}
