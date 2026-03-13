/*computes a European Article Number check digit*/
#include <stdio.h>

int main(void)
{
	int d, f1, f2, f3, f4, f5, s1, s2, s3, s4, s5, first_sum, second_sum, total;
	
	printf("Enter the first 11 digits of an EAN: ");
	scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &d, &f1, &f2, &f3, &f4, &f5, &s1, &s2, &s3, &s4, &s5);
	
	second_sum = d + f2 + f4 + s1 + s3 + s5;
	first_sum = f1 + f3 + f5 + s2 + s4;
	total = (3 * first_sum) + second_sum;
	
	printf("Check digit: %d\n", 9 - ((total - 1) % 10));
	return 0;
}
