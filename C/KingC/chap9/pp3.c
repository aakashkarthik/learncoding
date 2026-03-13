#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define DIRECTIONS 4

void generate_random_walk(char box[10] [10]);
void print_array(char box[10] [10]);

int main(void)
{
    char box[10] [10]; 
    generate_random_walk(box);
    print_array(box);
    
    return 0;
}

void generate_random_walk(char box[10] [10])
{
    int n, row, col, pre_row, pre_col;
    
    for(int i = 0; i < 10; i++)
    {
        for(int j = 0; j < 10; j++)
            box[i] [j] = '.';
    }
    
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
        
        box[row] [col] = c;
        pre_row = row;
        pre_col = col;
        n = rand() % DIRECTIONS;
    }
   
    return;
}

void print_array(char box[10] [10])
{
   for(int i = 0; i < 10; i++)
   {
       for(int j = 0; j < 10; j++)
           printf("%c", box[i] [j]);
       printf("\n");
   }
   
   return;
}
