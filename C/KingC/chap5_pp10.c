#include <stdio.h>

int main(void)
{
	int digit1;
	char grade;
	printf("Enter numerical grade: ");
	scanf("%1d%*d", &digit1);
	
	switch(digit1)
	{
	default : printf("Error: numerical grade is not between 0 to 100.\n please try again.");
		  return 1;
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
	}
	
	printf("letter grade: %c\n", grade);
	
	return 0;
}
