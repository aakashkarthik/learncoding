#include <stdio.h>

int main(void)
{
    int average_sum = 0, count = 0;
    int temperature_readings[30] [24];
    for(int i = 0; i < 30 ; i++)
    {
        for(int j = 0; j < 24; j++)
        {
            average_sum += temperature_readings[i] [j];
            count++;
        }
    }
}
