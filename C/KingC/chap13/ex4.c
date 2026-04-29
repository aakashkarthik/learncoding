#include <stdio.h>
#include <ctype.h>

int read_line(char str[], int n)
{
    char ch;
    int i = 0;
    while(isspace(ch = getchar()))
        i++;
    while(!isspace(ch = getchar()) && ch != '\n' && i < n)
        str[i++] = ch;
    str[i] = '\0';
    return i;
}

int main(void)
{}
