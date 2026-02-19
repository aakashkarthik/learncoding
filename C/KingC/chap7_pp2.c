#include <stdio.h>

int main(void)
{
    int i, n;
    char c;
    
    printf("This program prints a table of squares.\n");
    printf("Enter number of entries in table: ");
    scanf("%d", &n);
    
    for(i = 1; i <= n; i++)
    {
        printf("%20d%20d\n", i, i * i);
        if(i % 24  == 0)
        {
            printf("press Enter to continue...\n");
            c = getchar();
            while(c != '\n')
                c = getchar();
        }
    }
     
    return 0;
}
