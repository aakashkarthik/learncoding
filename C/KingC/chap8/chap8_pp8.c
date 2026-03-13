#include <stdio.h>

int main(void)
{
    int integers[5] [5];
    int n, i, k, sum_quiz, largest, smallest, student_total;
    for(n = 0; n < 5; n++)
    {
        printf("Enter grades of quiz %d: ", n + 1);
        sum_quiz = 0;
        largest = 0;
        smallest = 10000;
        for(i = 0; i < 5; i++)
        {
            scanf("%d", &(integers[n] [i]));
            k = integers[n] [i];
            if(k > largest)
                largest = k;
            if(i = 0)
                smallest = k;
            else if(k < smallest)
                smallest = k;
            sum_quiz += integers[n] [i];
            printf("average score: %d\n", sum_quiz / 5);
            printf("Highest score: %d\n", largest);
            printf("Lowest score: %d\n\n", smallest);
        }
    }
    
    for(n = 0; n < 5; n++)
    {
        student_total = 0;
        for(i = 0; i < 5; i++)
            student_total += integers[i] [n];
        printf("student %d's total: %d\n", n + 1, student_total);
        printf("And average: %d\n\n", student_total / 5);
    }
    
    return 0;
}
