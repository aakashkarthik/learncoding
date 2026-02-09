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
	struct student s2 = s1;
	struct student s3 = {7101, 7, 'A', 99,94};
	
	s2 = s1;
	s2.roll_no = 7204;
	s2.section = 'B';
	s2.maths = 99;
	
	printf("student #1: %d %d %c %d %d\n", s1.roll_no, s1.grade, s1.section, s1.maths, s1.science);
	printf("student #2: %d %d %c %d %d\n", s2.roll_no, s2.grade, s2.section, s2.maths, s2.science);
	printf("student #3: %d %d %c %d %d\n", s3.roll_no, s3.grade, s3.section, s3.maths, s3.science);
}
