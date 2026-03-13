#include <stdio.h>

int main(void)
{
	int a, b, c, d, set1l, set1s, set2l, set2s, largest, smallest;
	printf("Enter 4 integers: ");
	scanf("%d %d %d %d", &a, &b, &c, &d);
	
	if(a > b)
	{
		set1l = a;
		set1s = b;
	}
	else
	{
		set1l = b;
		set1s = a;
	}
	
	if(c > d)
	{
		set2l = c;
		set2s = d;
	}
	else
	{
		set2l = d;
		set2s = c;
	}
	
	if(set1l > set2l)
		largest = set1l;
	else
		largest = set2l;
	
	if(set1s < set2s)
		smallest = set1s;
	else
		smallest = set2s;
	
	printf("Largest: %d\n", largest);
	printf("smallest: %d\n", smallest);
	
	return 0;
		
}
