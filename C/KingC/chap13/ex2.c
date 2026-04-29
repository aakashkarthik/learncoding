#include <stdio.h>

int main(void)
{
    char *p = "abc";
    
// illegal   putchar(p);
    putchar(*p);//prints 'a'
    puts(p);//prints 'abc'
// illegal    puts(*p);
}
