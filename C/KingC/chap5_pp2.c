#include <stdio.h>

int main(void)
{
	int h1, h2, m1;
	printf("Enter a 24-hour time: ");
	scanf("%2d:%2d", &h1, &m1);

	if((h1 < 24 && h1 >= 0) || (m1 < 60 && m1 >= 0))
	{
		if(h1 > 12)
		{
			h2 = h1 - 12;
			printf("Equivalent 12-hour time: %d:%d PM\n", h2, m1);
		}
		else if(h1 == 12)
		{
			h2 = h1;
			printf("Equivalent 12-hour time: %d:%d PM\n", h2, m1);
		}
		else
		{
			h2 = h1;
			printf("Equivalent 12-hour time: %d:%d AM\n", h2, m1);
		}
	}
	
	return 0;
}
