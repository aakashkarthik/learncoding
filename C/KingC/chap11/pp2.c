#include <stdio.h>

void find_closest_flight(int desired_time,
                         int *departure_time,
                         int *arrival_time)
{
    int dtime1, dtime2, dtime3, dtime4, dtime5, dtime6, dtime7, dtime8;
	int check1, check2, check3, check4, twocheck1, twocheck2, end;
	//all these numbers are the number of minutes till midnight;
	dtime1 = desired_time - 480;
	dtime2 = desired_time - 583;
	dtime3 = desired_time - 679;
	dtime4 = desired_time - 767;
	dtime5 = desired_time - 840;
	dtime6 = desired_time - 945;
	dtime7 = desired_time - 1140;
	dtime8 = desired_time - 1305;
	//this to make sure they are all positive;
	dtime1 = dtime1 < 0 ? -dtime1 : dtime1;
	dtime2 = dtime2 < 0 ? -dtime2 : dtime2;
	dtime3 = dtime3 < 0 ? -dtime3 : dtime3;
	dtime4 = dtime4 < 0 ? -dtime4 : dtime4;
	dtime5 = dtime5 < 0 ? -dtime5 : dtime5;
	dtime6 = dtime6 < 0 ? -dtime6 : dtime6;
	dtime7 = dtime7 < 0 ? -dtime7 : dtime7;
	dtime8 = dtime8 < 0 ? -dtime8 : dtime8;
	//this decides the closest to the departure time among them all.
	check1 = dtime1 < dtime2 ? dtime1 : dtime2;
	check2 = dtime3 < dtime4 ? dtime3 : dtime4;
	check3 = dtime5 < dtime6 ? dtime5 : dtime6;
	check4 = dtime7 < dtime8 ? dtime7 : dtime8;
	
	twocheck1 = check1 < check2 ? check1 : check2;
	twocheck2 = check3 < check4 ? check3 : check4;
	
	end = twocheck1 < twocheck2 ? twocheck1 : twocheck2;
	
	if(end == dtime1)
    {
        *departure_time = 480;
        *arrival_time = 10 * 60 + 16;
    }

    else if(end == dtime2)
    {
        *departure_time = 583;
        *arrival_time = 11 * 60 + 52;
    }

    else if(end == dtime3)
    {
        *departure_time = 679;
        *arrival_time = 13 * 60 + 31;
    }

    else if(end == dtime4)
    {
        *departure_time = 767;
        *arrival_time = 15 * 60;
    }

    else if(end == dtime5)
    {
        *departure_time = 840;
        *arrival_time = 16 * 60 + 8;
    }

    else if(end == dtime6)
    {
        *departure_time = 954;
        *arrival_time = 17 * 60 + 55;
    }

    else if(end == dtime7)
    {
        *departure_time = 1140;
        *arrival_time = 21 * 60 + 20;
    }

    else if(end == dtime8)
    {
        *departure_time = 1305;
        *arrival_time = 23 * 60 + 58;
    }
}
int main(void)
{
	int h1, m1, desired_time, departure_time, arrival_time;
	printf("Enter a 24-hour time: ");
	scanf("%d:%d", &h1, &m1);
	desired_time = h1 * 60 + m1;
    
    find_closest_flight(desired_time, &departure_time, &arrival_time);
    
    switch(departure_time)
    {
        case 480 : 
	       	printf("Closest departure time is 8:00 a.m., arriving at 10:16 a.m.\n");
            break;
        case 583 :
		    printf("Closest departure time is 9:43 a.m., arriving at 11:52 a.m.\n");
            break;
        case 679 :
		    printf("Closest departure time is 11:19 a.m., arriving at 1:31 p.m.\n");
            break;
        case 767 :
		    printf("Closest departure time is 12:47 p.m., arriving at 3:00 p.m.\n");
            break;
        case 840 :
		    printf("Closest departure time is 2:00 p.m., arriving at 4:08 p.m.\n");
            break;
        case 954 :
		    printf("Closest departure time is 3:45 p.m., arriving at 5:55 p.m.\n");
            break;
        case 1140 :
		    printf("Closest departure time is 7:00 p.m., arriving at 9:20 p.m.\n");
            break;
        case 1305 :
		    printf("Closest departure time is 9:45 p.m., arriving at 11:58 p.m.\n");
            break;
    }
	
	return 0;
}
