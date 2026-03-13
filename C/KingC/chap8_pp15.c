#include <stdio.h>

int main(void)
{
    char message[80] = {};
    char c;
    int i, shift;
    
    printf("Enter message to be encrypted: ");
    for(i = 0;; i++)
    {
        message[i] = getchar();
        if(message[i] == '.' || message[i] == '?' || message[i] == '!')
            break;
    }
    
    printf("Enter shift amount (1-25): ");
    scanf("%d", &shift);
    
    printf("Encrypted message: ");
    for(int j = 0; j <= i; j++)
    {
        c = message[j];
        if(c >= 'A' && c <= 'Z')
            c = ((c - 'A') + shift) % 26 + 'A';
        else if(c >= 'a' && c <= 'z')
            c = ((c - 'a') + shift) % 26 + 'a';
        
        message[j] = c;
        printf("%c", message[j]);
    }
    printf("\n");
    
    return 0;
}
