#include <stdio.h>

int main(void)
{
	int r1c1, r1c2, r1c3, r1c4;
	int r2c1, r2c2, r2c3, r2c4;
	int r3c1, r3c2, r3c3, r3c4;
	int r4c1, r4c2, r4c3, r4c4;
	int rowsum1, rowsum2, rowsum3, rowsum4;
        int colsum1, colsum2, colsum3, colsum4;
        int diagonalsum1, diagonalsum2;
	printf("Enter the numbers from 1 to 16 in any order:\n");
	scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d",&r1c1,&r1c2,&r1c3,&r1c4,
								&r2c1,&r2c2,&r2c3,&r2c4,
								&r3c1,&r3c2,&r3c3,&r3c4,
								&r4c1,&r4c2,&r4c3,&r4c4);
	printf("%.2d %.2d %.2d %.2d\n", r1c1, r1c2, r1c3, r1c4);
	printf("%.2d %.2d %.2d %.2d\n", r2c1, r2c2, r2c3, r2c4);
	printf("%.2d %.2d %.2d %.2d\n", r3c1, r3c2, r3c3, r3c4);
	printf("%.2d %.2d %.2d %.2d\n\n", r4c1, r4c2, r4c3, r4c4);
	rowsum1 = r1c1 + r1c2 + r1c3 + r1c4;
	rowsum2 = r2c1 + r2c2 + r2c3 + r2c4;
	rowsum3 = r3c1 + r3c2 + r3c3 + r3c4;
	rowsum4 = r4c1 + r4c2 + r4c3 + r4c4;
	
	colsum1 = r1c1 + r2c1 + r3c1 + r4c1;
	colsum2 = r1c2 + r2c2 + r3c2 + r4c2;
	colsum3 = r1c3 + r2c3 + r3c3 + r4c3;
	colsum4 = r1c4 + r2c4 + r3c4 + r4c4;
	
	diagonalsum1 = r1c1 + r2c2 + r3c3 + r4c4;
	diagonalsum2 = r4c1 + r3c2 + r2c3 + r1c4;
	
	printf("Row sum: 1:%d,2:%d,3:%d,4:%d\n", rowsum1, rowsum2, rowsum3, rowsum4);
	printf("Column sum: 1:%d,2:%d,3:%d,4:%d\n", colsum1, colsum2, colsum3, colsum4);
	printf("Diagonal sum: 1:%d,2:%d\n", diagonalsum1, diagonalsum2);

	return 0;
}
