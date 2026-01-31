#include <stdio.h>

int main(void)
{
	int a, b, c, d, largest, smallest;
	printf("Enter 4 integers: ");
	scanf("%d %d %d %d", &a, &b, &c, &d);
	
	largest = a;
	if(b > largest)
		largest = b;
	if(c > largest)
		largest = c;
	if(d > largest)
		largest = d;
	
	printf("Largest: %d\n", largest);
	
	smallest = a;
	if(b < smallest)
		smallest = b;
	if(c < smallest)
		smallest = c;
	if(d < smallest)
		smallest = d;
	
	printf("smallest: %d\n", smallest);
	
	return 0;
		
}
