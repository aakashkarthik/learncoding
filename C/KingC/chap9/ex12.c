#include <stdio.h>

double inner_product(int n, double a[n], double b[n])
{
    double product;
    for(int i = 0; i < n; i++)
        product += a[i] * b[i];
    
    return product;
}

int main(void)
{
    double a[5] = {2.3, 4.0968, 5, 4.6, 3};
    double b[5] = {10, 10000, 1, 10, 1};
    
    printf("Their inner product is %f\n", inner_product(5, a, b));
    
    return 0;
}
