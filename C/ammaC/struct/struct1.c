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
	struct student s1 = {7308, 7, 'C', 100, 95};
	printf("student #1: %d %d %c %d %d\n", s1.roll_no, s1.grade, s1.section, s1.maths, s1.science);
}
