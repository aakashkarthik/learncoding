#include <stdio.h>

int digit(int n, int k)
{
    while(k != 0)
    {
        if(k == 1)
            return n % 10;
        else
            n /= 10;

        k--;
    }
}

int main(void)
{
    for(int k = 1; k < 10; k++)
        printf("the %dth digit of 82945 is %d\n", k, digit(82945, k));
}
