#include <stdio.h>

void create_magic_square(int n, int square[99][99]);
void print_magic_square(int n, int square[99][99]);

int main(void)
{
    printf("This program creats a magic square of a specified size.\n");
    printf("The size must be an odd number between 1 and 99.\n");
    
    int n;
    int square[99][99] = {};
    printf("Enter size of magic square: ");
    scanf("%d", &n);
    
    create_magic_square(n, square);
    print_magic_square(n, square);
    
}

void create_magic_square(int n, int square[99][99])
{
    int row, col, prev_row, prev_col;
    prev_row = row = 0;
    prev_col = col = n / 2;
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
}

void print_magic_square(int n, int square[99][99])
{
    for(int row = 0; row < n; row++)
    {
        for(int col = 0; col < n; col++)
            printf("%5d", square[row][col]);
        
        printf("\n");
    }
        return;
}
