/*computes a Universal Product Code check digit*/
#include <stdio.h>

int main(void)
{
	int d, f1, f2, f3, f4, f5, s1, s2, s3, s4, s5, first_sum, second_sum, total, check;
	
	printf("Enter the UPC: ");
	scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &d, &f1, &f2, &f3, &f4, &f5, &s1, &s2, &s3, &s4, &s5, &check);
	
	first_sum = d + f2 + f4 + s1 + s3 + s5;
	second_sum = f1 + f3 + f5 + s2 + s4;
	total = (3 * first_sum) + second_sum;
	
	if(9 - ((total - 1) % 10) == check)
		printf("VALID\n");
	else
		printf("NOT VALID\n");
	
	return 0;
}
