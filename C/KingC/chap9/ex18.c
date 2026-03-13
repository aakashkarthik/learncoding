#include <stdio.h>

int gcd(int m, int n)
{
    if(n = 0)
        return m;
    else
        gcd(n, m % n);
}

int main(void)
{
    int m, n;
    printf("Enter the value of m :  ");
    scanf("%d", &m);
    printf("Enter the value of n :  ");
    scanf("%d", &n);
    
    printf("Their gcd is %d.\n", m);
    
    return 0;
}
