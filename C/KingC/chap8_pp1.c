#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    bool repeat_digit[11] = {false};
    bool digit_seen[10] = {false};
    short digit, i;
    long n;
    
    printf("Enter a number: ");
    scanf("%ld", &n);
    
    while(n > 0)
    {
        digit = n % 10;
        if(digit_seen[digit])
        {
            repeat_digit[digit] = true;
            n /= 10;
            continue;
        }
        digit_seen[digit] = true;
        n /= 10;
    }
    
    printf("Repeated digit(s): ");
    
    for(i = 1; i < 11; i++)
    {
        if(repeat_digit[i] == true)
            printf("%hd ", i);
    }
        printf("\n");
    
    return 0;
}
