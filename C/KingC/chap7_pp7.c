#include <stdio.h>

int main(void)
{
    char operator;
	int num1,num2, denom1, denom2, result_num, result_denom;
	
	printf("Enter 2 fractions with a operator in between(+, -, *, /): ");
	scanf("%d/%d %c %d/%d", &num1, &denom1, &operator, &num2, &denom2);
    result_denom = denom1 * denom2;
    switch(operator)
    {
        case '+':
	        result_num = num1 * denom2 + num2 * denom1;
	        printf("The sum is %d/%d\n", result_num,result_denom);
            break;
        case '-':
            result_num = num1 * denom2 - num2 * denom1;
            printf("The difference is %d/%d\n", result_num, result_denom);
            break;
	    case '*':
            result_num = num1 * num2;
            printf("The product is %d/%d\n", result_num, result_denom);
            break;
        case '/':
            result_num = num1 * denom2;
            result_denom = denom1 * num2;
            printf("The quotient is %d/%d\n", result_num, result_denom);
    }

	return 0;
}
