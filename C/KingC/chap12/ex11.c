#include <stdio.h>

int find_largest(int a[], int n)
{
    int max;
    max = a[0];
    for(int *p = a + 1; p < a + n; p++)
        if(*p > max)
            max = *p;
    return max;
}

int main(void)
{
    int array[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    printf("The largest element is %d\n", find_largest(array, 10));
}
