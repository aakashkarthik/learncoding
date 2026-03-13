#include <stdio.h>

void selection_sort(int n, int a[n])
{
    if(n == 0)
        return;
    int j, i, largest = a[0];
    for(i = 1; i < n; i++)
    {
        if(a[i] > largest)
        {
            largest = a[i];
            j = i;
        }
    }
    
    for(; j < n - 1; j++)
        a[j] = a[j + 1];
    
    a[n - 1] = largest;
    selection_sort(n - 1, a);
    return;
}

int main(void)
{
    int array[10] = {7, 6, 9, 5, 2, 10, 21, 3, 8, 4};
    selection_sort(10, array);
    
    for(int i = 0; i < 10; i++)
        printf("%d ", array[i]);
    
    printf("\n");
    
    return 0;
}
