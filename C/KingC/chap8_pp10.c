#include <stdio.h>

int main(void)
{
	int h1, m1, closest, midnight1, difference1, difference2, departure_hour;
    int departure[8]  = { 8 * 60 +  0
                        , 9 * 60 + 43
                        ,11 * 60 + 19
                        ,12 * 60 + 47
                        ,14 * 60 +  0
                        ,15 * 60 + 45
                        ,19 * 60 +  0
                        ,21 * 60 + 45};
    int arrival[8] = {10 * 60 + 16
                     ,11 * 60 + 52
                     ,13 * 60 + 31
                     ,15 * 60 +  0
                     ,16 * 60 +  8
                     ,17 * 60 + 55
                     ,21 * 60 + 20
                     ,23 * 60 + 58};
	printf("Enter a 24-hour time: ");
	scanf("%d:%d", &h1, &m1);
    midnight1 = h1 * 60 + m1;
    
    closest = departure[0];
    for(int i = 1; i < 8; i++)
    {
        difference1 = midnight1 - closest;
        difference2 = midnight1 - departure[i];
        
        difference1 = difference1 < 0 ? -difference1 : difference1;
        difference2 = difference2 < 0 ? -difference2 : difference2;
        
        if(difference2 < difference1)
            closest = departure[i];
    }
    
     departure_hour = (closest / 60) <= 12 ? closest / 60 : closest / 60 - 12;
     printf("The closest departure time is %d:%d", departure_hour, closest % 60);
     if(departure_hour == closest / 60 - 12)
         printf(" p.m., ");
     else
         printf(" a.m., ");
     
     printf("arriving at ");
     switch(departure_hour)
     {
         case 8:
             printf("10:16 a.m.");
             break;
         case 11:
             printf("1:31 p.m.");
             break;
         case 12:
             printf("3:00 p.m.");
             break;
         case 2:
             printf("4:08 p.m.");
             break;
         case 3:
             printf("5:55 p.m.");
             break;
         case 7:
             printf("9:20 p.m.");
             break;
         case 9:
             if(closest % 60 == 45)
                 printf("11:58 p.m.");
             else
                 printf("11:52 a.m.");
     }
     printf("\n");
	
	return 0;
}
