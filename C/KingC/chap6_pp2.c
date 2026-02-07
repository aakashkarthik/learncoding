#include <stdio.h>

int main(void)
{
	int m, n, gcd, remainder;
	printf("Enter two integers: ");
	scanf("%d %d", &m, &n);
	while(n != 0)
	{
			remainder = m % n;
			m = n;
			n = remainder;
	}
	printf("Greatest common divisor: %d\n", m);
}
