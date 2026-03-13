#include <stdio.h>

int main(void)
{
    int sum = 0, count = 0;
    char ch;
    
    printf("Enter a sentence: ");
    ch = getchar();
    
    while(ch != '\n')
    {
        if(ch == ' ' || ch == '.')
            count++;
        if(ch != ' ' || ch == '.')
            sum++;
        ch = getchar();
    }
    
    printf("Average word length: %.1f\n", (float)sum/count);
}
