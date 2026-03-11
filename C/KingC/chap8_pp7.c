#include <stdio.h>

int main(void)
{
    printf("Enter a group of 5 by 5 integers.\n\n");
    int integers[6] [6];
    int n, i, row_sum, col_sum;
    for(n = 0; n < 5; n++)
    {
        printf("Enter row %d: ", n + 1);
        row_sum = 0;
        for(i = 0; i < 5; i++)
        {
            scanf("%d", &(integers[n] [i]));
            row_sum += integers[n] [i];
        }
        integers[n] [i] = row_sum;
    }
    
    printf("\n");
    printf("Row totals: ");
    for(n = 0; n < 5; n++)
        printf("%d ", integers[n] [5]);
    printf("\n");
    
    printf("Column totals: ");
    for(i = 0; i < 5; i++)
    {
        col_sum = 0;
        for(n = 0; n < 5; n++)
            col_sum += integers[n] [i];
        
        printf("%d ", col_sum);
    }
    printf("\n");

    return 0;
}
