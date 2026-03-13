#include <stdio.h>

int main(void)
{
    printf("This program creats a magic square of a specified size.\n");
    printf("The size must be an odd number between 1 and 99.\n");
    
    int n, row, col, prev_row, prev_col;
    printf("Enter size of magic square: ");
    scanf("%d", &n);
    
    int square[n][n] = {};
    row = 0;
    col = n / 2;
    for(int i = 1; i <= n * n; i++)
    {
        square[row][col] = i;
        
        if(i == n * n)
            break;
        
        if(row == 0)
            row = n - 1;
        if(col == n - 1)
            col = 0;
        
        if(prev_row == 0 && prev_col != n - 1)
            col++;
        else if(prev_col == n - 1 && prev_row != 0)
            row--;
        else if(prev_col != n - 1 && prev_row != 0)
        {
            row--;
            col++;
        }
        if(square[row][col] >= 1 && square[row][col] <= n * n)
        {
            row = prev_row + 1;
            col = prev_col;
        }
        
        prev_row = row;
        prev_col = col;
    }
    
    for(int j = 0; j < n; j++)
    {
        for(int k = 0; k < n; k++)
            printf("%5d", square[j][k]);
        
        printf("\n");
    }
}
