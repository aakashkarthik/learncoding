#include <stdio.h>

int main(void)
{
    char c;
    bool weekend[7] = {false};
    weekend[5] = weekend[6] = true;
    for(int i = 0; i < 7; i++)
    {
        if(weekend[i] == true)
            c = 't';
        else
            c = 'f';
        printf("day %d is a weekend.(%c)\n", i + 1, c);
    }
}
