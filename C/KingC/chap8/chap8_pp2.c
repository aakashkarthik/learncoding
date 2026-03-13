#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int repeat_digit[11] = {0};
    bool digit_seen[10] = {false};
    short digit, i;
    long n;
    
    printf("Enter a number: ");
    scanf("%ld", &n);
    
    while(n > 0)
    {
        digit = n % 10;
        repeat_digit[digit] += 1;
        n /= 10;
    }
    
    printf("digit:%9d", 0);
    for(int k = 1; k < 10; k++)
    {
        printf("%2d", k);
    }
    printf("\n");
    printf("occurrences: ");
    
    for(i = 0; i < 10; i++)
    {
        printf("%2d", repeat_digit[i]);
    }
        printf("\n");
    
    return 0;
}
