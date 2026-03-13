#include <stdio.h>

int gcd(int m, int n)
{
	int gcd, remainder;
	while(n != 0)
	{
			remainder = m % n;
			m = n;
			n = remainder;
	}
    return m;
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
