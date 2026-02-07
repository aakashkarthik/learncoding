#include <stdio.h>

int main(void)
{
	int num, denom,num_copy,denom_copy, gcd, remainder;
	printf("Enter a fraction: ");
	scanf("%d/%d", &num, &denom);
	num_copy = num;
	denom_copy = denom;
	while(n != 0)
	{
			remainder = num_copy % denom_copy;
			num_copy = denom_copy;
			denom_copy = remainder;
	}
	gcd = num_copy;
	printf("In lowest terms: %d/%d\n", num/gcd, denom/gcd);
}
