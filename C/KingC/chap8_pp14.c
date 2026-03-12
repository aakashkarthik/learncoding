#include <stdio.h>

int main(void)
{
    char sentence[100]  = {' '};
    char terminate;
    
    printf("Enter a sentence: ");
    terminate = getchar();
    int size = 0;
    while(terminate != '!' && terminate != '.' && terminate != '?')
    {
        sentence[size] = terminate;
//        printf("test: %c\n", sentence[size]);
        size++;
        terminate = getchar();
//        printf("terminate: %c\n", terminate);
    }
    
    printf("reversal of sentence:");

    int i = size -1 ; 
    int j, k;
    while(i >= 0)
    {
        printf(" ");
        j = i;
        while(sentence[i] != ' ' && i != 0)
            i--;
        if(i == 0)
            i--;
        
        for(k = i + 1; k <= j; k++)
        {
            putchar(sentence[k]);
        }
        
        i--;
//        printf("i = %d, j = %d, k = %d\n", i, j, k);
    }
    printf("%c", terminate);
    printf("\n");
    
    return 0;
}
