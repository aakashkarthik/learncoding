#include <stdio.h>

#define LENGTH 10

int largest(int n, int a[n]);
double average(int n, int a[n]);
int positive_numbers(int n,int a[n]);

int main(void)
{
    int n = LENGTH;
    int array[LENGTH] = {1, 2,  3, 4, 5, 6, 7, 8, 9, 10};
    
    printf("The largest number int the array is %d\n", largest(n, array));
    printf("the average of all the numbers in the array is %f\n", average(n, array));
    printf("the number of positive numbers in the array is %d\n", positive_numbers(n, array));
}

int largest(int n, int a[n])
{
    int largest = a[0];
    
    for(int i = 1; i < n; i++)
    {
        if(a[i] > largest)
            largest = a[i];
    }
    
    return largest;
}

double average(int n, int a[n])
{
    double sum;
    for(int i = 0; i < n; i++)
        sum += a[i];
    
    return sum/n;
}

int positive_numbers(int n, int a[n])
{
    int positive = 0;
    for(int i = 0; i < n; i++)
    {
        if(a[i] > 0)
            positive++;
    }
    
    return positive;
}
