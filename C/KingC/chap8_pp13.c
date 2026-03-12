#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char last_name[20]  = {};
    char initial;
    
    printf("Enter a first and last name: ");
    initial = toupper( getchar() );
    char c = getchar();
    
    while(c != ' ')
        c = getchar();
    
    int n = 0;
    last_name[n] = getchar();
    while(last_name[n] != '\n' && n < 20)
        last_name[++n] = getchar();

    for(int i = 0; i < n; i++)
        printf("%c", last_name[i]);
    
    printf(", %c.\n", initial);
    
    return 0;
}
