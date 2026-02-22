#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int vowel;
    char c;
    
    printf("Enter a sentence: ");
    c = getchar();
    vowel = 0;
    while(c != '\n')
    {
        switch( toupper(c) )
        {
            case 'A': 
            case 'E': 
            case 'I': 
            case 'O': 
            case 'U': 
                vowel += 1;
                break;
            case '.':
            case '?':
            case '!':
                break;
        }
        c = getchar();
    }
    
    printf("Your sentence contains %d vowels.", vowel);
    
    return 0;
}
