#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define DIRECTIONS 4

int main(void)
{
    int n, row, col, pre_row, pre_col;
    char box[10] [10] = {{'.', '.', '.', '.', '.', '.', '.', '.', '.', '.'}
                        ,{'.', '.', '.', '.', '.', '.', '.', '.', '.', '.'}
                        ,{'.', '.', '.', '.', '.', '.', '.', '.', '.', '.'}
                        ,{'.', '.', '.', '.', '.', '.', '.', '.', '.', '.'}
                        ,{'.', '.', '.', '.', '.', '.', '.', '.', '.', '.'}
                        ,{'.', '.', '.', '.', '.', '.', '.', '.', '.', '.'}
                        ,{'.', '.', '.', '.', '.', '.', '.', '.', '.', '.'}
                        ,{'.', '.', '.', '.', '.', '.', '.', '.', '.', '.'}
                        ,{'.', '.', '.', '.', '.', '.', '.', '.', '.', '.'}
                        ,{'.', '.', '.', '.', '.', '.', '.', '.', '.', '.'}};
    box[0] [0] = 'A';
    pre_col = col = 0;
    pre_row = row = 0;
    srand((int) time(NULL));
    n = rand() % DIRECTIONS;
    for(char c = 'B'; c <= 'Z'; c++)
    {
        switch(n)
        {
            case 0: 
                if(row == 0)
                {
                    n = rand() % DIRECTIONS;
                    c--;
                    continue;
                }
                row--;
                break;
            case 1: 
                if(col == 9)
                {
                    n = rand() % DIRECTIONS;
                    c--;
                    continue;
                }
                col++;
                break;
            case 2: 
                if(row == 9)
                {
                    n = rand() % DIRECTIONS;
                    c--;
                    continue;
                }
                row++;
                break;
            case 3: 
                if(col == 0)
                {
                    n = rand() % DIRECTIONS;
                    c--;
                    continue;
                }
                col--;
                break;
        }
        
        if(box[row] [col] != '.')
        {
            row = pre_row;
            col = pre_col;
            n = rand() % DIRECTIONS;
            c--;
            continue;
        }
        
        printf("row = '%d', col = '%d' and the letter %c and the direction %d.\n\n", row, col, c, n);
        box[row] [col] = c;
        pre_row = row;
        pre_col = col;
        n = rand() % DIRECTIONS;
    }
   
   for(int i = 0; i < 10; i++)
   {
       for(int j = 0; j < 10; j++)
           printf("%c", box[i] [j]);
       printf("\n");
   }
   
   return 0;
}
