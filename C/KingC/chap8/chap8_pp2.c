#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int repeat_digit[10] = {0};
    char c;
    
    printf("Enter a number: ");
    while((c = getchar()) != '\n')
        repeat_digit[c - '0'] += 1;
    
    printf("digit:%9d", 0);
    for(short k = 1; k < 10; k++)
    {
        printf("%2d", k);
    }
    printf("\n");
    printf("occurrences: ");
    
    for(short i = 0; i < 10; i++)
    {
        printf("%2d", repeat_digit[i]);
    }
        printf("\n");
    
    return 0;
}
