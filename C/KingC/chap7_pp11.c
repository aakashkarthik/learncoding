#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char initial, c;
    
    printf("Enter a first and last name: ");
    initial = toupper( getchar() );
    c = getchar();
    while(c != ' ')
    {
        c = getchar();
    }
    c = getchar();
    while(c != '\n')
    {
        putchar(c);
        c = getchar();
    }
    
    printf(", %c.\n", initial);
    
    return 0;
}
