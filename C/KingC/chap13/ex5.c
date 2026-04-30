#include <stdio.h>
#include <ctype.h>

void capitalize(char *str)
{
    char *s = str;
    while(*s != '\0')
    {
        *s = toupper(*s);
        s++;
    }
}

int main(void)
{
    char str[] = "1Ab2c39dver tou bla4";
    printf("Before capitalizing: %s\n", str);
    capitalize(str);
    printf("After capitalizing: %s\n", str);
}
