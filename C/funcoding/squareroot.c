#include <stdio.h>

float brute_square_root(float i, int size)
{
	if(size <= 0)
	{
		printf("invalid size.\n");
		return -1;
	}
	long double square_root;
	int p1;
	long double p2;
	int count;
	
	//this part will calculate the integer part(p1)
	count = 0;
	p1 = 0;
	while(p1 * p1 < i)
	{
		p1++;
		count++;
	}
	if(p1 * p1 != i)
		p1--;	
	//this part will calculate the fraction part(p2)
	p2 = 0.0;
	//the decimal float is upto 10^x it has to calculate but in the following example 
	//it calculates a bit extra as i need to round it off if i ever needs it.
	float decimal = 0.1;
	for(int digit = 1; digit <= size + 1; digit++)
	{
		p2 += decimal;
		while((p1 + p2) * (p1 + p2) < i)
		{
			p2 += decimal;
			count++;
		}
		if((p1 + p2) * (p1 + p2) != i)
			p2 -= decimal;
		decimal /= 10;
	}
	
	
	square_root = p1 + p2;
	
	printf("Number of iterations taken to find the square root: %d\n\n", count);
	
	return square_root;
}

int main(void)
{
	float i, square_root;
	int n;
	printf("this program calculates a square root of a number.The square root only shows 'n' digits after the decimal point.\n\n");
	printf("Enter the value of 'n': ");
	scanf("%d", &n);
	printf("Enter a floating point number upto 'n' digits after decimal point: ");
	scanf("%f", &i);
	
	square_root = brute_square_root(i, n);
	if(square_root == -1)
	{
		return 1;
	}
	
	printf("the square root is: %.*f\n", n, square_root);
	printf("To verify the square root it's square is: %.*f\n\n", n, square_root * square_root);
}
