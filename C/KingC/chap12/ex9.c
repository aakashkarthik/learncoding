#include <stdio.h>

double inner_product(const double *a, const double *b, int n)
{
    double sum;
    for(int i = 0; i < n; i++)
        sum += a[i] * b[i];
    return sum;
}

int main(void)
{
    const double a[] = {1, 10, 100};
    const double b[] = {3, 10, 365.64};
    printf("inner product of arrays a and b are: %f\n", inner_product(a, b, 3));
    return 0;
}
