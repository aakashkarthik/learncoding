#include <stdio.h>

long long power(int n, int exponent);
long long polynomial_calculation(int n);

int main(void)
{
    int x;
    printf("This program computes the value for the polynomial 3x^2 + 2x^4 - 5x^3 - x^2 + 7x - 6\n");
    printf("Enter the value for x: ");
    scanf("%d", &x);
    printf("the value of the polynomial: %lld\n", polynomial_calculation(x));
}

long long polynomial_calculation(int n)
{
    int term1 = 3 * power(n, 2);
    int term2 = 2 * power(n, 4);
    int term3 = -5 * power(n, 3);
    int term4 = -(power(n, 2));
    int term5 = 7 * n;
    int result = term1 + term2 + term3 + term4 + term5 - 6;
    return result;
}

long long power(int n, int exponent)
{
    if(exponent == 0)
        return 1;
    else
        return n * power(n, exponent - 1);
}
