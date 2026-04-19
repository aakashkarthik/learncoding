#include <stdio.h>

#define N 7

void print_array(int a[]);
void quicksort(int a[],int low, int high);

int main(void)
{
    int array[N] = {12, 3, 6 , 18, 7, 15, 10};
    quicksort(array, 0, N - 1);
}

void print_array(int a[])
{
    for(int i = 0; i < N; i++)
        printf("%d ", a[i]);
    printf("\n");
}

void quicksort(int a[],int low, int high)
{
    printf("low = %d, high = %d, pivot = %d\n", low, high, a[low]);
    print_array(a);
    printf("\n\n");
    int old_high = high;
    int old_low = low;
    if(low >= high)
        return;
    int p = a[low];
    while(high > low)
    {
        while(high > low && a[high] >= p)
            high--;
        a[low] = a[high];
        if(high != low)
            low++;
        
        while(high > low && a[low] <= p)
            low++;
        a[high] = a[low];
        if(low != high)
            high--;
    }
    a[low] = p;
    
    printf("low = %d, high = %d, pivot = %d\n", low, high, a[low]);
    printf("after partitioning: ");
    print_array(a);
    printf("\n");
    quicksort(a, old_low, low - 1);
    quicksort(a, high + 1,old_high);
}
