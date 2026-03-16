#include <stdio.h>

void push(char c);
char pop(void);
bool is_empty(void);
void stack_overflow(void);

char contents[100];
int top = 0;

int main(void)
{
    printf("Enter parentheses and or/braces: ");
    char c, ch;
    while((c = getchar()) != '\n')
    {
        if(c == '(' || c == '{')
            push(c);
        else
        {
            if(c == '}' && (ch = pop()) == '(')
                break;
            push(ch);
            if(c == ')' && (ch = pop()) == '{')
                break;
            push(ch);
            pop();
        }
    }
    if(is_empty())
        printf("parentheses and braces are nested properly.\n");
    else
        printf("parentheses and braces are not nested properly.\n");
    
    return 0;
}

void stack_overflow(void)
{
    printf("Stack overflow.\n");
}

bool is_empty(void)
{
    return top <= 0;
}

void push(char c)
{
    if(top >= 99)
    {
        stack_overflow();
        return;
    }
    contents[top++] = c;
}

char pop(void)
{
    if(top < 0)
        return '\0';
    return contents[top -= 2];
}
