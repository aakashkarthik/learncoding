#include <stdio.h>

int *find_largest(int a[], int n)
{
    int *largest = a;
    for(int i = 0; i < n; i++)
    {
        if(a[i] > *largest)
            largest = &a[i];
    }
    return largest;
}

int main(void)
{
    int array[6] = {6 , -100, 100, 45, 110, 1000};
    int *largest = find_largest(array, 6);
    printf("The largest value in the array is %d, and its address %p\n", *largest, largest);
}
