#include <stdio.h>

int main(void)
{
    int i = 99;
    int *p = &i;
    printf("The value of a is: %d\n", *p);
    printf("The value of b is: %p\n", &p);//not i.
    printf("The value of c is: %p\n", *&p);//not i.
    printf("The value of d is: %p\n", &*p);//not i.
//    printf("The value of e is: %d\n", *i); compilation error
    printf("The value of f is: %p\n", &i);//not i.
    printf("The value of g is: %d\n", *&i);
//    printf("The value of h is: %d\n", &*i); compilation error
}
