#include <stdio.h>

#define N 10

int main(void)
{
    double indent[N][N];
    int n = N, count = 1;

    for(double *p = &indent[0][0]; p <= &indent[N - 1][N - 1]; p++, count++)
    {
        if(n == N)
        {
            *p = 1.0;
            n = 0;
        }
        else
        {
            *p = 0.0;
            n++;
        }
        printf("%d ", (int)*p);
        if(count % N == 0)
            printf("\n");
    }
    
    return 0;
}
