#include <stdio.h>

int main(void)
{
    float no1, no2;
    char operator;

    printf("Enter an expression(without any spaces): ");
    scanf("%f", &no1);
//    printf("no1 = %f, operator = %c, no2 = %f\n", no1, opertor, no2);
    
    while((operator = getchar()) != '\n')
    {
        scanf("%f", &no2);
//      printf("no1 = %f, operator = %c, no2 = %f\n", no1, opertor, no2);
        switch(operator)
        {
            case '+': 
                no1 = no1 + no2;
                break;
            case '-':
                no1 = no1 - no2;
                break;
            case '*':
                no1 = no1 * no2;
                break;
            case '/':
                no1 = no1 / no2;
                break;
                
        } 
    }
    
    printf("Value of the expression: %f\n", no1);
    
    return 0;
}
