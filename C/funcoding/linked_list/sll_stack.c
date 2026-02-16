#include <stdio.h>
#include <stdlib.h>

struct stack
{
	int data;
	struct stack *next;
};

void peek(struct stack *top)
{
	if(top == NULL)
		printf("The stack is empty.\n");
	else
		printf("The data at the top is %d.\n", top->data);
}

struct stack* push(struct stack *top,int insert)
{
	struct stack *new = (struct stack*) malloc(sizeof(struct stack));
	new->data = insert;
	new->next = top;
	top = new;

	return top;
}

struct stack* pop(struct stack *top)
{
	if(top == NULL)
	{
		printf("There is no data to pop.\n");
		return top;
	}
	
	struct stack *temp = top;
	top = top->next;
	printf("The value deleted was: %d\n", temp->data);
	free(temp);
	
	return top;
}

int main(void)
{
	struct stack *top = NULL;
	int command, insert;
	
	printf("This program simulates a stack using a linked list.\n\n");
	
	printf("This is the command table.\n\n");
	printf("Enter '0' to exit.\n");
	printf("Enter '1' to read the top of the stack.\n");
	printf("Enter '2' to push an element.\n");
	printf("Enter '3' to pop an element.\n");
	
	while(1)
	{
		printf("What command do you want to excecute: ");
		scanf("%d", &command);
		
		switch(command)
		{
			case 0: return 0;
				
			case 1: peek(top);
				break;
				
			case 2: printf("Enter the number to insert: ");
				scanf("%d", &insert);
				top = push(top, insert);
				break;
				
			case 3: top = pop(top);
				break;
				
			default: printf("Unknown command entered.\n please try again.\n");
		}
	}
}
