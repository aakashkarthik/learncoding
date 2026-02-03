#include <stdio.h>

int main(void)
{
	int h1, m1, h2, h3, midnight1, dtime1, dtime2, dtime3, dtime4, dtime5, dtime6, dtime7, dtime8;
	int check1, check2, check3, check4, twocheck1, twocheck2, end;
	printf("Enter a 24-hour time: ");
	scanf("%d:%d", &h1, &m1);
	
	midnight1 = h1 * 60 + m1;
	dtime1 = midnight1 - 480;
	dtime2 = midnight1 - 583;
	dtime3 = midnight1 - 679;
	dtime4 = midnight1 - 767;
	dtime5 = midnight1 - 840;
	dtime6 = midnight1 - 945;
	dtime7 = midnight1 - 1140;
	dtime8 = midnight1 - 1305;
	//all these numbers are the number of minutes till midnight;
	dtime1 = dtime1 < 0 ? -dtime1 : dtime1;
	dtime2 = dtime2 < 0 ? -dtime2 : dtime2;
	dtime3 = dtime3 < 0 ? -dtime3 : dtime3;
	dtime4 = dtime4 < 0 ? -dtime4 : dtime4;
	dtime5 = dtime5 < 0 ? -dtime5 : dtime5;
	dtime6 = dtime6 < 0 ? -dtime6 : dtime6;
	dtime7 = dtime7 < 0 ? -dtime7 : dtime7;
	dtime8 = dtime8 < 0 ? -dtime8 : dtime8;
	//this to make sure they are all positive;
	check1 = dtime1 < dtime2 ? dtime1 : dtime2;
	check2 = dtime3 < dtime4 ? dtime3 : dtime4;
	check3 = dtime5 < dtime6 ? dtime5 : dtime6;
	check4 = dtime7 < dtime8 ? dtime7 : dtime8;
	
	twocheck1 = check1 < check2 ? check1 : check2;
	twocheck2 = check3 < check4 ? check3 : check4;
	
	end = twocheck1 < twocheck2 ? twocheck1 : twocheck2;
	//this decides the closest to the departure time among them all.
	
	if(end == dtime1)
	       	printf("Closest departure time is 8:00 a.m., arriving at 10:16 a.m.\n");

	if(end == dtime2)
		printf("Closest departure time is 9:43 a.m., arriving at 11:52 a.m.\n");

	if(end == dtime3)
		printf("Closest departure time is 11:19 a.m., arriving at 1:31 p.m.\n");

	if(end == dtime4)
		printf("Closest departure time is 12:47 p.m., arriving at 3:00 p.m.\n");

	if(end == dtime5)
		printf("Closest departure time is 2:00 p.m., arriving at 4:08 p.m.\n");

	if(end == dtime6)
		printf("Closest departure time is 3:45 p.m., arriving at 5:55 p.m.\n");

	if(end == dtime7)
		printf("Closest departure time is 7:00 p.m., arriving at 9:20 p.m.\n");

	if(end == dtime8)
		printf("Closest departure time is 9:45 p.m., arriving at 11:58 p.m.\n");
	
	return 0;
}
