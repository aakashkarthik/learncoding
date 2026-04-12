#include <stdio.h>

void split_time(long total_sec, int *hr, int *min, int *sec)
{
    *hr = total_sec / (60 * 60);
    *min = (total_sec / 60) % 60;
    *sec = total_sec % 60;
}

int main(void)
{
    long total_sec;
    int hr, min, sec;
    total_sec = 86399;// max value is 86399
    split_time(total_sec, &hr, &min, &sec);
    printf("The time is %d:%d:%d\n", hr, min, sec);
}
