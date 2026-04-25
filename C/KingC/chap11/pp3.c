#include <stdio.h>

void reduce(int num, int denom, int *reduce_num, int *reduce_denom)
{
	int num_copy,denom_copy, gcd, remainder;
	num_copy = num;
	denom_copy = denom;
	while(denom_copy != 0)
	{
			remainder = num_copy % denom_copy;
			num_copy = denom_copy;
			denom_copy = remainder;
	}
	gcd = num_copy;
    *reduce_num = num / gcd;
    *reduce_denom = denom / gcd;
}
int main(void)
{
    int num, denom, reduce_num, reduce_denom;
	printf("Enter a fraction: ");
	scanf("%d/%d", &num, &denom);
    reduce(num, denom, &reduce_num, &reduce_denom);
	printf("In lowest terms: %d/%d\n", reduce_num, reduce_denom);
}
