#include <stdio.h>

int num_digits(unsigned int n)
{
    int digits = 0;
    while(n != 0)
    {
        n /= 10;
        digits++;
    }
    
    return digits;
}

int main(void)
{
    unsigned int number;
    
    printf("Enter a positive number: ");
    scanf("%d", &number);
    
    printf("It has %d digit(s).", num_digits(number));
}
