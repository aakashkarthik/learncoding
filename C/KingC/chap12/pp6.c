#include <stdio.h>

int* split(int a[], int *low, int *high)
{
    int part_element = *low;
    
    for(;;)
    {
        while(low < high && part_element <= *high)
            high--;
        if(low >= high) break;
        *low++ = *high;
        
        while(low < high && part_element >= *low)
            low++;
        if(low >= high) break;
        *high-- = *low;
    }
    
    *high = part_element;
    return high;
}

void quicksort(int a[], int *low, int *high)
{
    int *middle;
    
    if(low >= high) return;
    middle = split(a, low, high);
    quicksort(a, low, middle - 1);
    quicksort(a, middle + 1, high);
}

#define N 10

int main(void)
{
    int a[N], i;
    printf("Enter %d number to be sorted: ", N);
    for(i = 0; i < N; i++)
        scanf(" %d", &a[i]);
    quicksort(a, a, &a[N-1]);
    
    printf("In sorted order: ");
    for(i = 0; i < N; i++)
        printf("%d ", a[i]);
    printf("\n");
    
    return 0;
}
