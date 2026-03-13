/*computes a Universal Product Code check digit*/
#include <stdio.h>

int main(void)
{
	int d, f1, f2, f3, f4, f5, s1, s2, s3, s4, s5, first_sum, second_sum, total;

	printf("Enter the first (single) digit: ");
	scanf("%1d", &d);
	printf("Enter first group of five digits: ");
	scanf("%1d%1d%1d%1d%1d", &f1, &f2, &f3, &f4, &f5);
	printf("Enter second group of five digits: ");
	scanf("%1d%1d%1d%1d%1d", &s1, &s2, &s3, &s4, &s5);
	
	first_sum = d + f2 + f4 + s1 + s3 + s5;
	second_sum = f1 + f3 + f5 + s2 + s4;
	total = (3 * first_sum) + second_sum;
	
	printf("Check digit: %d\n", 10 - (total % 10));
	return 0;//the result may be a mistake as sometimes the total can be a ten multiple meaning the check digit will be 10 which is two digits. 
}
