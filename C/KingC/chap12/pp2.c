#include <stdio.h>
#include <ctype.h>

char message[100] = {};
char *p = message;

bool is_palindrome(void)
{
    char *q = &message[0];
    while(q < p)
    {
        if(*q == *p)
        {
            q++;
            p--;
        }
        else
            return false;
    }

    return true;
}

int main(void)
{
    char c;
    printf("Enter a message: ");
    while(p <= &message[99] && c != '\n')
    {
        c = getchar();
        if(isalpha(c))
            *p++ = tolower(c);
    }
    p--;

    if(is_palindrome())
        printf("Palindrome.\n\n");
    else
        printf("Not a palindrome.\n");

    return 0;
}
