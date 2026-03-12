#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int sum = 0;
    char word;
    int scrabble[26] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 1, 3, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};
    
    printf("Enter a word: ");
    
    word = getchar();
    while(word != '\n')
    {
        sum += scrabble[tolower(word) - 'a'];
        word = getchar();
    }
    
    printf("Scrabble value: %d\n", sum);
    return 0;
}
