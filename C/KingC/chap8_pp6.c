#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char message[100];
    char c;
    int i, j;
    
    printf("Enter message: ");
    c = getchar();
    for(i = 0; c != '\n'; i++)
    {
        message[i] = c;
        c = getchar();
    }
    
    for(j = 0; j < i; j++)
    {
        message[j] = toupper(message[j]);
        switch(message[j])
        {
            case 'A':
                message[j] = '4';
                break;
            case 'B':
                message[j] = '8';
                break;
            case 'E':
                message[j] = '3';
                break;
            case 'I':
                message[j] = '1';
                break;
            case 'O':
                message[j] = '0';
                break;
            case 'S':
                message[j] = '5';
        }
    }
    
    printf("In B1FF-speak: ");
    for(i = 0; i < j; i++)
        printf("%c", message[i]);
    printf("!!!!!!!!!!");
    printf("\n");
    
    return 0;
}
