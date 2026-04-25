#include <stdio.h>

int stack[100] = {};
int *top = stack - 1;

bool is_empty()
{
    return top == stack - 1;
}

bool is_full()
{
    return top == &stack[99];
}

void make_empty()
{
    top = stack - 1;
}

int main(void)
{
    top = &stack[99];
    printf("if stack is empty this returns 1, else 0 : %d\n", is_empty());
    printf("is stack is full this returns 1, else 0 : %d\n", is_full());
    make_empty();
    printf("testing make empty function if pass 1, else 0 : %d\n", is_empty());
    
    return 0;
}
