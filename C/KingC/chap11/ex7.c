#include <stdio.h>

void split_date(int day_of_year, int year, int *month, int *day)
{
    bool leap_year = false;
    if(year % 4 == 0)
        leap_year = true;
    
    if(day_of_year < 31)
    {
        *month = 1;
        *day = day_of_year;
    }
    else if(day_of_year > 60)
    {
        if(leap_year)
            *month =  1 + ((day_of_year - 29) / 30);
        else
            *month =  1 + ((day_of_year - 28) / 30);

        *day =  (day_of_year - 29) % 30;
    }
    else
    {
        *month = 2;
        day_of_year =- 31;
        *day = day_of_year;
    }
}

int main(void)
{
    int date, year, month ,day;
    printf("Enter day from 1-366: ");
    scanf("%d", &date);
    printf("Enter the year: ");
    scanf("%d", &year);
    split_date(date, year , &month, &day);
    printf("The date given(in dd/mm/yy) is: %d/%d/%d\n", day, month, year);
}
