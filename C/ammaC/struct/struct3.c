#include <stdio.h>

struct student
{
	int roll_no;
	int grade;
	char section;
	int maths;
	int science;
};

int main(void)
{
	
	struct student student[3] = {
		{7308, 7, 'C', 100, 95},
		{7204, 7, 'B', 99, 95},
		{7101, 7, 'A', 99, 94}};

	for(int i = 0; i < 3; i++)
	{
		printf("student #%d: %d %d %c %d %d\n", i + 1,  student[i].roll_no, student[i].grade, 
							student[i].section, student[i].maths, student[i].science);
	}
	
	return 0;
}
