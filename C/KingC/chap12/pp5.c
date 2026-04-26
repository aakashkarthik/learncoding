#include <stdio.h>

int main(void)
{
    char sentence[100]  = {' '};
    char terminate;
    
    printf("Enter a sentence: ");
    terminate = getchar();
    char *size = sentence;
    while(terminate != '!' && terminate != '.' && terminate != '?')
    {
        *size = terminate;
//        printf("test: %c\n", sentence[size]);
        size++;
        terminate = getchar();
//        printf("terminate: %c\n", terminate);
    }
    size--;
    
    printf("reversal of sentence:");
    char *j, *k;
    while(size >= sentence)
    {
        printf(" ");
        j = size;
        while(*size != ' ' && size != sentence)
            size--;
        if(size == sentence)
            size--;
        
        for(k = size + 1; k <= j; k++)
            putchar(*k);
        
        size--;
//        printf("i = %d, j = %d, k = %d\n", i, j, k);
    }
    printf("%c", terminate);
    printf("\n");
    
    return 0;
}
