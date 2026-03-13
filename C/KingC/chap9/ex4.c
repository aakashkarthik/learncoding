#include <stdio.h>

int day_of_year(int month, int day, int year)
{
    int date = day;
    if(year % 4 == 0 && month > 2)
        date += 1;
    
    for(; month > 1; month--)
    {
        if(month < 8)
        {
            if(month % 2 == 1)
                date += 31;
            else
                date += 30;
        }
        else
        {
            if(month == 2)
                date += 28;
            else if(month % 2 == 0)
                date += 31;
            else
                date += 30;
        }
    }
    
    return date;
}

int main(void)
{
    int month, day, year;
    printf("Enter a date(mm/dd/yyyy): ");
    scanf("%d/%d/%d", &month, &day, &year);
    
    printf("It is the %dth day of that year.\n", day_of_year(month, day, year));
    
    return 0;
}
