#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>
#include <time.h>

int roll_dice(void);
bool play_game(void);

int my_random(void)
{
    srand((unsigned) time(NULL));
    for(long long i = 0; i < 10000000; i++)
    {}
    return rand() % 6 + 1;
}

int main(void)
{
    int wins = 0, losses = 0;
    char c = 'y';
    while(toupper(c) == 'Y')
    {
        printf("\n");
       if(play_game())
       {
           printf("You WIN!\n\n");
           wins++;
       }
       else
       {
           printf("You LOSE.\n\n");
           losses++;
       }
        
//       printf("Checking my random: %d\n", my_random());
       printf("Play again? ");
       c = getchar();
       while(c == '\n')
           c = getchar();
    }
    printf("\n");
    printf("Wins: %d  Losses: %d\n", wins, losses);
}

int roll_dice(void)
{
    return my_random() + my_random();
}

bool play_game(void)
{
    int point = roll_dice(), roll;
    printf("You rolled: %d\n", point);
    
    if(point == 7 || point == 11)
        return true;
    else if(point == 2 || point == 3 || point == 12)
        return false;
    else
    {
        while((roll = roll_dice()) != 7)
        {
            printf("You rolled: %d\n", roll);
            if(roll == point)
                return true;
        }
        return false;
    }
}
