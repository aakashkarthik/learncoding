#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

char stack[100] = {};
int top = 0;
char c = '0';

char pop(void);
void push(char c);
void overflow(void);
void underflow(void);
void process_expression(void);
void get_input(void);

int main(void)
{
    for(;;)
    {
        get_input();
        process_expression();
    }
    return 0;
}

void overflow(void)
{
    printf("Expression is too complex.\n");
}

void underflow(void)
{
    printf("Not enought operands in expression.\n");
}

void push(char c)
{
    if(top > 98)
    {
        overflow();
        return;
    }
    stack[top++] = c;
}

char pop(void)
{
    if(top < 1)
    {
        underflow();
        return 'q';
    }
    return stack[--top];
}

void get_input(void)
{
    printf("Enter RPN expression: ");
    scanf(" %c", &c);
    if(isalpha(c))
        exit(EXIT_SUCCESS);
}

void process_expression(void)
{
    char op1, op2;
    while(c != '=')
    {
        if(c != '+' && c != '-' && c != '*' && c != '/')
        {
            if(c < '0' && c > '9')
                continue;
        }
        if(c >= '0' && c <= '9')
            push(c);
        else if(c != '=')
        {
            op2 = pop();
            op1 = pop();
            if(op1 == 'q' || op2 == 'q')
            {
                top = 0;
                return;
            }
            //printf("%c\n", op1);
            //printf("%c\n", op2);
            switch(c)
            {
                case '+': 
                    push((op1 - '0') + (op2 - '0') + '0');
                    break;
                case '-': 
                    push((op1 - '0') - (op2 - '0') + '0');
                    break;
                case '*': 
                    push((op1 - '0') * (op2 - '0') + '0');
                    break;
                case '/': 
                    if(op2 == '0')
                    {
                        printf("invalid operation.\n");
                        op2 = 'o';
                        return;
                    }
                    push((op1 - '0') / (op2 - '0') + '0');
                    break;
            }
        }
        scanf(" %c", &c);
    }
    if(top > 1)
    {
        printf("invalid operation.\n");
        return;
    }
    if(op2 != 'o')
        printf("the value of the expression is: %d\n", pop() - '0');
}
