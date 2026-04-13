#include <stdio.h>

void find_two_largest(int a[], int n, int *largest, int *second_largest)
{
    int temp;
    *largest = a[0];
    *second_largest = a[1];
    for(int i = 1; i < n; i++)
    {
        if(*second_largest > *largest)
        {
            temp = *largest;
            *largest = *second_largest;
            *second_largest = temp;
        }
        else if(*largest < a[i])
        {
            temp = *largest;
            *largest = a[i];
            *second_largest = temp;
        }
        else if(*second_largest < a[i])
        {
            *second_largest = a[i];
        }

    }
}

int main(void)
{
    int array[5] = {1, 4, -8, 99, 10};
    int largest, s_largest;
    find_two_largest(array, 5, &largest, &s_largest);
    printf("Largest = %d, second largest = %d\n" ,largest, s_largest);
}
