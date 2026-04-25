#include <stdio.h>

bool search(const int a[], int n, int key)
{
    for(const int *p = a; p <= &a[n - 1]; p++)
        if(*p == key)
            return true;
    return false;
}

int main(void)
{
    const int  a[10] = {0, 1, 2, 3, 4, 5, 99, 8, 28, 10};
    if(search(a, 10, 67))
        printf("67!");
    else
        printf("Please SPEED I need this.\n");
    if(search(a, 10, 24))
        printf("It is my birthday.\n");
    else
        printf("But .... It's my birthday.\n");
    
    return 0;
}
