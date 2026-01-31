#include <stdio.h>

int main(void)
{
	int a, b, c, d, largest, smallest;
	printf("Enter 4 integers: ");
	scanf("%d %d %d %d", &a, &b, &c, &d);
	
	if(a >= b && a >= c && a >= d)
		largest = a;
	else if(b >= a && b >= c && b >= d)
		largest = b;
	else if(c >= a && c >= b && c >= d)
		largest = c;
	else 
		largest = d;
	if(a <= b && a <= c && a <= d)
		smallest = a;
	else if(b <= a && b <= c && b <= d)
		smallest = b;
	else if(c <= b && c <= c && c <= d)
		smallest = c;
	else
		smallest = d;
	
	printf("Largest: %d\n", largest);
	printf("smallest: %d\n", smallest);
	
	return 0;
		
}
