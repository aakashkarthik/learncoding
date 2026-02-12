#include <stdio.h>
#include <stdlib.h>

struct node
{
	int data;
	struct node *next;
};

void print(struct node *head)
{
	if(head == NULL)
	{
		printf("The list is empty.\n");
		return;
	}
	
	struct node *temp = head;
	while(temp != NULL)
	{
		printf("%d\t", temp->data);
		temp = temp->next;
	}
	printf("\n");
}

struct node* insert_begin(int num,struct node *head)
{
	struct node *new = (struct node*) malloc(sizeof(struct node));
	new->data = num;
	new->next = head;

	return new;
}

void insert_middle(int value, int new_num, struct node *head)
{
	struct node *temp = head;
	struct node *new = (struct node*) malloc(sizeof(struct node));
	new->data = new_num;
	
	
	while(temp != NULL && temp->data != value )
	{
		temp = temp->next;
	}

	if(temp == NULL)
	{
		printf("List doesnt contain the value user provided.\n");
		return;
	}

	new->next = temp->next;
	temp->next = new;
	
}

struct node* insert_end(int num, struct node *head)
{
	struct node *temp = head;
	struct node *new = (struct node*) malloc(sizeof(struct node));
	new->data = num;
	new->next = NULL;
	
	if(head == NULL)
	{
		head = new;
	}
	
	else
	{	
		while(temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = new;
	}
	
	return head;
}

int main(void)
{
	struct node *head = NULL;
	int n, node, command;
	
	printf("(1) for insert at begining.\n(2) for inserting after a given node.\n(3) for inserting in the end.\n(4) for printing its contents.\n");
	
	do
	{
		printf("Enter what function you want call (0 for exit): ");
		scanf("%d", &command);
		
		switch (command)
		{
			case 0: break;
			case 4: print(head);
				continue;

			case 1: 
				printf("Enter the value to insert: ");
				scanf("%d", &n);
				head = insert_begin(n, head);
				break;
				
			case 2:	printf("Enter the value to insert: ");
				scanf("%d", &n);
				printf("after which node data: ");
				scanf("%d", &node);
				insert_middle(node, n, head);
				break;
				
			case 3:	printf("Enter the value to insert: ");
				scanf("%d", &n);
				head = insert_end(n, head);
				break;
				
			default: printf("Wrong value entered! \n");
				 printf("Please try again later.\n");
				 return 1;
		}
	}while(command != 0);
}
