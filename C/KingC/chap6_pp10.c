#include <stdio.h>

int main(void)
{
	int d, m, y, ld, lm, ly;
	
	printf("Enter a date (mm/dd/yy): ");
	scanf("%d/%d/%d", &lm, &ld, &ly);
	
	while(lm != 0 && ld != 0 && ly != 0)
	{
		printf("Enter a date (mm/dd/yy): ");
		scanf("%d/%d/%d", &m, &d, &y);
		if(m == 0 && d == 0 && y == 0)
			break;
		
		if(ly < y)
		{}
		else if(ly == y)
		{
			if(lm < m)
			{}
			else if(lm == m)
			{
				if(ld <= d)
				{}
				else
				{
					ly = y;
					lm = m;
					ld = d;
				}
			}
			else
			{
				ly = y;
				lm = m;
				ld = d;
			}
		}
		else
		{
			ly = y;
			lm = m;
			ld = d;
		}
	}
	printf("%.2d/%.2d/%.2d is the earliest date.\n", lm, ld, ly);
}
