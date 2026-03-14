#include <stdio.h>

long long power(int x, int n);

int main(void)
{
    int x = 1, n = 1;
    while(x != 0)
    {
        printf("Enter the value for x(0 to exit): ");
        scanf("%d", &x);
        if(x == 0)
            return 0;
        else
        {
            printf("Enter the exponent: ");
            scanf("%d", &n);
            printf("the value of the expression is %lld\n", power(x, n));
        }
    }
}

long long power(int x, int n)
{
    if(n == 0)
        return 1;
    else if(n % 2 == 0 && n != 2)
        return power(power(x, n/2), 2);
    else
        return x * power(x, n - 1);
}
