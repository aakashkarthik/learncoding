#include <stdio.h>

int main(void)
{
    int no1, no2, temp;
    int fibonnaci[40] = {};
    fibonnaci[0] = fibonnaci[1] = 1;
    
    no1 = 1;
    no2 = 1;
    
    for(int i = 2; i < 40; i++)
    {
        fibonnaci[i] = no1 + no2;
        temp = no1;
        no1 = fibonnaci[i];
        no2 = temp;
    }
    for(int k = 0; k < 40; k++)
    {
        printf("%d ", fibonnaci[k]);     
    }
    printf("\n");
}
