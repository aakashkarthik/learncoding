#include <stdio.h>

int main(void)
{
    int no;
    long long factorial;
    
    printf("Enter a positive integer: ");
    scanf("%d", &no);
    printf("Factorial of %d: ", no);
    
    factorial = 1;
    for(;no != 0; no--)
    {
        factorial = factorial * no;
    }
    
    printf("%Ld\n", factorial);
    
    return 0;
}
