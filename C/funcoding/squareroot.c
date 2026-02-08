#include <stdio.h>

float brute_square_root(float i)
{
	float square_root;
	int p1;
	float p2;
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
	for(float decimal = 0.1; decimal >= 0.000001; decimal /= 10)
	{
		p2 += decimal;
		while((p1 + p2) * (p1 + p2) < i)
		{
			p2 += decimal;
			count++;
		}
		if((p1 + p2) * (p1 + p2) != i)
			p2 -= decimal;
	}
	
	square_root = p1 + p2;
	
	printf("Number of iterations taken to find the square root: %d\n\n", count);
	
	return square_root;
}

int main(void)
{
	float i, square_root;
	printf("this program calculates a square root of a number.The square root only shows 4 digits after the decimal point.\n\n");
	printf("Enter a floating point number upto four digits after decimal point: ");
	scanf("%f", &i);
	
	square_root = brute_square_root(i);
	
	printf("the square root is: %.4f\n", square_root);
	printf("To verify the square root it's square is: %.4f\n\n", square_root * square_root);
}
