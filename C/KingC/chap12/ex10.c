#include <stdio.h>

int* find_middle(int a[], int n) {
    return a + n/2;
}

int main(void)
{
    int array[11] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0, 10};
    printf("The middle of the array is %d.\n", *(find_middle(array, 11)));

    return 0;
}
