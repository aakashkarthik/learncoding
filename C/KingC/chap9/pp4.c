#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

void read_array(int count[26]);
bool equal_array(int word1[26],int  word2[26]);

int main(void)
{
    int word1[26] = {0};
    int word2[26] = {0};
    printf("Enter first word: ");
    read_array(word1);
    printf("Enter second word: ");
    read_array(word2);
    
    if(equal_array(word1, word2))
        printf("The words are anagrams.\n");
    else
        printf("The words are not anagrams.\n");
    return 0;
}

void read_array(int count[26])
{
    char c;
    c = getchar();
    while(isalpha(c))
    {
        count[tolower(c) - 'a'] += 1;
        c = getchar();
    }
    
}

bool equal_array(int word1[26],int  word2[26])
{
    for(int j = 0; j < 26; j++)
        word2[j] = word2[j] - word1[j];
    
    for(int i = 0; i < 26; i++)
    {
        if(word2[i] != 0)
            return false;
    }
    
    return true;
    
}
