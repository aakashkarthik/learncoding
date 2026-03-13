#include <stdio.h>

int main(void)
{
    int digit;
    char number[15];
    
    printf("Enter phone number: ");
    
    for(int i; i < 15; i++)
    {
        number[i] = getchar();
        switch(number[i])
        {
            case 'A': 
            case 'B': 
            case 'C': 
                number[i] = '2';
                break;
            case 'D': 
            case 'E': 
            case 'F':
                number[i] = '3';
                break;
            case 'G':
            case 'H':
            case 'I':
                number[i] = '4';
                break;
            case 'J':
            case 'K':
            case 'L':
                number[i] = '5';
                break;
            case 'M':
            case 'N':
            case 'O':
                number[i] = '6';
                break;
            case 'P':
            case 'R':
            case 'S':
                number[i] = '7';
                break;
            case 'T':
            case 'U':
            case 'V':
                number[i] = '8';
                break;
            case 'W':
            case 'X':
            case 'Y':
            case 'Z':
                number[i] = '9';
                break;
            default:
                break;
        }
        putchar(number[i]);
    }
         printf("\n");

    return 0;
}
