#include <stdio.h>

#define MAX_DIGITS 30

char digit[3] [MAX_DIGITS * 4];

void clear_digit_array(void);
void process_digit(char digit, int i);
void print_digit_array(void);

int main(void)
{
    char c;
    printf("Enter a number: ");
    clear_digit_array();
    int i = MAX_DIGITS;
    while((c = getchar()) != '\n' && i > 0)
    {
        if(c >= '9' && c <= '0')
            continue;
        else
        {
            process_digit(c, i);
            i--;
        }
    }
    print_digit_array();
}

void clear_digit_array(void)
{
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < MAX_DIGITS * 4; j++)
            digit[i] [j] = ' ';
    }
}

void process_digit(char c, int i)
{
    i = i - MAX_DIGITS;
    i = i < 0 ? -i : i;
    switch(c)
    {
        case '1': 
            digit[1] [i * 4 + 2] = '|';
            digit[2] [i * 4 + 2] = '|';
            break;
        case '2': 
            digit[0] [i * 4 + 1] = '_';
            digit[1] [i * 4 + 1] = '_';
            digit[1] [i * 4 + 2] = '|';
            digit[2] [i * 4 + 0] = '|';
            digit[2] [i * 4 + 1] = '_';
            break;
        case '3': 
            digit[0] [i * 4 + 1] = '_';
            digit[1] [i * 4 + 1] = '_';
            digit[1] [i * 4 + 2] = '|';
            digit[2] [i * 4 + 1] = '_';
            digit[2] [i * 4 + 2] = '|';
            break;
        case '4': 
            digit[1] [i * 4 + 0] = '|';
            digit[1] [i * 4 + 1] = '_';
            digit[1] [i * 4 + 2] = '|';
            digit[2] [i * 4 + 2] = '|';
            break;
        case '5': 
            digit[0] [i * 4 + 1] = '_';
            digit[1] [i * 4 + 0] = '|';
            digit[1] [i * 4 + 1] = '_';
            digit[2] [i * 4 + 1] = '_';
            digit[2] [i * 4 + 2] = '|';
            break;
        case '6': 
            digit[0] [i * 4 + 1] = '_';
            digit[1] [i * 4 + 0] = '|';
            digit[1] [i * 4 + 1] = '_';
            digit[2] [i * 4 + 0] = '|';
            digit[2] [i * 4 + 1] = '_';
            digit[2] [i * 4 + 2] = '|';
            break;
        case '7': 
            digit[0] [i * 4 + 1] = '_';
            digit[1] [i * 4 + 2] = '|';
            digit[2] [i * 4 + 2] = '|';
            break;
        case '8': 
            digit[0] [i * 4 + 1] = '_';
            digit[1] [i * 4 + 0] = '|';
            digit[1] [i * 4 + 1] = '_';
            digit[1] [i * 4 + 2] = '|';
            digit[2] [i * 4 + 0] = '|';
            digit[2] [i * 4 + 1] = '_';
            digit[2] [i * 4 + 2] = '|';
            break;
        case '9': 
            digit[0] [i * 4 + 1] = '_';
            digit[1] [i * 4 + 0] = '|';
            digit[1] [i * 4 + 1] = '_';
            digit[1] [i * 4 + 2] = '|';
            digit[2] [i * 4 + 1] = '_';
            digit[2] [i * 4 + 2] = '|';
            break;
        case '0': 
            digit[0] [i * 4 + 1] = '_';
            digit[1] [i * 4 + 0] = '|';
            digit[1] [i * 4 + 2] = '|';
            digit[2] [i * 4 + 0] = '|';
            digit[2] [i * 4 + 1] = '_';
            digit[2] [i * 4 + 2] = '|';
    }
}

void print_digit_array(void)
{
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < MAX_DIGITS * 4; j++)
            printf("%c", digit[i] [j]);
        printf("\n");
    }
    printf("\n");
}
