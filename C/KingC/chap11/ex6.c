#include <stdio.h>

int find_two_largest(int a[], int n, int *largest, int *second_largest)
{
    if(n < 2)
    {
        printf("Error: need at least 2 elements.\n");
        return 2;
    }

    *largest = a[0];
    *second_largest = a[1];
    for(int i = 1; i < n; i++)
    {
        if(*largest < a[i])
        {
            *second_largest = *largest;
            *largest = a[i];
        }
        else if(*second_largest < a[i])
        {
            *second_largest = a[i];
        }

    }
    if(*largest == *second_largest)
    {
        printf("Error: largest and second largest are same.\n");
        return 1;
    }

    return 0;
}

int main(void)
{
    int array[] = {1 ,2, 7, -8, 77, 8980, 5}; // all same; only one number; only 2 numbers; multiple numbers;
    int largest, s_largest;
    int valid_return_code = find_two_largest(array, sizeof(array)/sizeof(array[0]), &largest, &s_largest);
    if(valid_return_code)
        return valid_return_code;
    else
        printf("Largest = %d, second largest = %d\n" ,largest, s_largest);
}
