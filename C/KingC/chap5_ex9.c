#include <stdio.h>

int main(void)
{
	int score;
	printf("what is the score of your paper out of 100: ");
	scanf("%d", &score);
	printf("number 1: ");
	if(score >= 90)
	 printf("A");
	else if(score >= 80)
	 printf("B");
	else if(score >= 70)
	 printf("C");
	else if(score >= 60)
	 printf("D");
	else 
	 printf("F");
	
	printf("number 2:");
	if(score < 60)
	 printf("F");
	else if(score < 70)
	 printf("D");
	else if(score < 80)
	 printf("C");
	else if(score < 90)
	 printf("B");
	else
	 printf("A");
	//I think they both are same.
	
	return 0;
}
