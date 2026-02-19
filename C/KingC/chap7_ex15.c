#include <stdio.h>
typedef char int8_t;
typedef short int16_t;
typedef int int32_t;

int main(void)
{
    int8_t a = 31;
    printf("Int8: %d\n", a);
    int16_t b = 100;
    printf("Int16: %d\n", b);
    int32_t c = 1000;
    printf("Int32: %d\n", c);
    
    return 0;
}
