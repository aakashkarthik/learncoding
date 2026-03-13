#include <stdio.h>

int check(int x, int y, int n)
{
    if(x >= 0 && x < n && y >= 0 && y < n)
        return 1;
    else
        return 0;
}

int main(void)
{
    int x = -1, y = 4, n = 5;
    if(check(x, y, n))
        printf("True\n");
    else
        printf("False\n");
}
