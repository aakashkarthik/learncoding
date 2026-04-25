#include <stdio.h>

#define N 100

int main(void)
{
    char string[N] = {};
    printf("Enter a message: ");
    char c, *p = string;
    while((c = getchar()) != '\n' && p - string < 100)
    {
        *p = c;
        *p++;
    }
    p--;
    
    printf("Reversal is: ");
    while(p >= string)
    {
        printf("%c", *p);
        p--;
    }
    printf("\n");
}
