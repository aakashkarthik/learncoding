#include <stdio.h>

void censor(char str[])
{
    for(char *s = str; *s != '\0';)
    {
        if(*s == 'f' && *(s + 1) == 'o' && *(s + 2) == 'o')
            *(s+2) = *(s+1) = *s = 'x';
        s++;
    }
}

int main(void)
{
    char str[] = "food fool";
    censor(str);
    printf("%s\n", str);
}
