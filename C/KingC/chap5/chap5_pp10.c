#include <stdio.h>

int main(void)
{
	int numerical_grade,digit1;
	char grade;
	printf("Enter numerical grade: ");
	scanf("%d", &numerical_grade);
	
	digit1 = numerical_grade / 10;
	
	switch(digit1)
	{
	case 0: case 1: case 2: case 3: case 4: case 5:
		grade = 'F';
		break;
	case 6:
		grade = 'D';
		break;
	case 7:
		grade = 'C';
		break;
	case 8:
		grade = 'B';
		break;
	case 9:
		grade = 'A';
		break;
	default:
	       	if(digit1 != 10)
		  {
			  printf("Error: numerical grade is not between 0 to 100.\n please try again.");
		  	  return 1;
		  }
		
		grade = 'A';
		break;
	}
	
	printf("letter grade: %c\n", grade);
	
	return 0;
}
