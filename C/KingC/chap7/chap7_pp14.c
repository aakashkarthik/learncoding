#include <stdio.h>

int main(void)
{
    long double x, y;
    printf("Enter a postive number: ");
    scanf("%Lf", &x);
    
    y = 1;
    for(int i = 1;((y * y - x) < 0 ? -(y * y - x) : y * y - x) >= 0.01, i <= 5; i++)
    {
//        printf("x = %Lf, y = %Lf, x/y = %Lf", x, y , x/y);
        y = (y + (x/y)) / 2.0f;
  //      printf(", average = %Lf\n", y);
    }
    
    printf("Its square root is %Lf\n", y);
    
    return 0;
}
