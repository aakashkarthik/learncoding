#include <stdio.h>

int main(void)
{
    int a[] = {5, 15, 34, 54, 14, 2, 52, 72};
    int *p = &a[1], *q = &a[5];
    printf("(a) %d\n", *(p + 3));
    printf("(b) %d\n", *(q - 3));
    printf("(c) %ld\n", q - p);
    printf("(d) true\n");
    printf("(e) false\n");
    
    return 0;
}
