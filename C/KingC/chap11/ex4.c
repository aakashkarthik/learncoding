#include <stdio.h>

void swap(int *p, int *q)
{
    int temp = *p;
    *p = *q;
    *q = temp;
}

int main(void)
{
    int i, j;
    printf("Enter the value for 'i': ");
    scanf("%d", &i);
    printf("Enter the value for 'j': ");
    scanf("%d", &j);
    printf("i = %d, j = %d\n", i, j);
    swap(&i, &j);
    printf("i = %d, j = %d\n", i, j);
}
