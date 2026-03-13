#include <stdio.h>

int fact(int n)
{
    return n <= 1 ? 1 : n * fact(n - 1);
}

int main(void)
{
    printf("The factorial of %d is %d\n", 10, fact(10));
    return 0;
}
