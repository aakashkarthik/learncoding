#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char ch1, ch2;
	int h1, m1, h2;
	printf("Enter a 12-hour time: ");
	scanf("%d:%d%c%c", &h1, &m1, &ch1, &ch2);
	
    if(toupper(ch1) == 'P' || toupper(ch2) == 'P')
    {
        if(h1 != 12)
            h2 = (h1 + 12);
        else
            h2 = h1 + 12;
    }
    else if(toupper(ch1) == 'A' || toupper(ch2) == 'A')
    {
        h2 = h1;
    }
    
    printf("Equivalent 24-hout time: %d:%.2d\n", h2, m1/*minute2 is the same as minute1*/);
    
	return 0;
}
