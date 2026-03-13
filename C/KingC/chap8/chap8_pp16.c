#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int word1[26] = {0};
    int word2[26] = {0};
    char c;
    
    printf("Enter first word: ");
    c = getchar();
    while(isalpha(c))
    {
        (word1[tolower(c) - 'a']) += 1;
        c = getchar();
    }
    
    printf("Enter second word: ");
    c = getchar();
    while(isalpha(c))
    {
        (word2[tolower(c) - 'a']) += 1;
        c = getchar();
    }
    
    for(int j = 0; j < 26; j++)
        word2[j] = word2[j] - word1[j];
    
    for(int i = 0; i < 26; i++)
    {
        if(word2[i] != 0)
        {
            printf("The words are not anagrams.\n");
            return 0;
        }
    }
    
    printf("The words are anagrams.\n");
    
    return 0;
}
