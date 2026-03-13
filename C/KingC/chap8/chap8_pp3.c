#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    short digit, i;
    long n;
    
    do
    {
        bool digit_seen[10] = {false};
        printf("Enter a number: ");
        scanf("%ld", &n);
        
        while(n > 0)
        {
            digit = n % 10;
            if(digit_seen[digit])
                break;
            digit_seen[digit] = true;
            n /= 10;
        }
        
        if(n > 0)
            printf("Repeated digit.\n\n");
        else
            printf("No repeated digit.\n\n");
    }while(n > 0);
    
    return 0;
}
