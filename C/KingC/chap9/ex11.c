#include <stdio.h>

float compute_GPA(int n, char grades[]);

int main(void)
{
    char grades[10] = {'A', 'C', 'b', 'f', 'D', 'F', 'a', 'b', 'c', 'C'};
    //A = 4, B = 3, C = 2, D = 1, F = 0;
    
    printf("The average of grades is %f\n", compute_GPA(10, grades));
}

float compute_GPA(int n, char grades[])
{
    float sum;
    for(int i = 0; i < n; i++)
    {
        switch(grades[i])
        {
            case 'A': case 'a':
                sum += 4;
                break;
            case 'B': case 'b':
                sum += 3;
                break;
            case 'C': case 'c':
                sum += 2;
                break;
            case 'D': case 'd':
                sum += 1;
                break;
            case 'F': case 'e':
                sum += 0;
                break;
        }
    }
    
    return sum/n;
}
