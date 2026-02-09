#include <stdio.h>

struct Student
{
	int roll_no;
	int grade;
	char section;
	int maths;
	int science;
};

int main(void)
{
	
	struct Student student[3] = {
		{7308, 7, 'C', 100, 95},
		{7204, 7, 'B', 99, 95},
		{7101, 7, 'A', 99, 94}
	};
	
	struct Student *ptr = student;
	
	for(int i = 0; i < 3; i++)
	{
		printf("student #%d: %d %d %c %d %d\n", i + 1,  ptr->roll_no, ptr->grade, 
								ptr->section, ptr->maths, ptr->science);
		ptr++;
	}
	
	return 0;
}
