#include <stdio.h>
#include <stdlib.h>

struct node
{
	int data;
	struct node *next;
};

struct node *head = NULL;

void check(int number)
{
    struct node *temp = head;
	while(temp != NULL)
	{
		if(number != head->data)
		    temp = temp->next;
		else
			break;
	}
	
	if(temp == NULL)
		printf("The number you entered is not there in the linked list.\n\n");
	else
		printf("The number you entered is there in the linked list.\n\n");
}

void print()
{
	if(head == NULL)
	{
		printf("The list is empty.\n\n");
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

void insert_begin(int num)
{
	struct node *new = (struct node*) malloc(sizeof(struct node));
	new->data = num;
	new->next = head;
    
    head = new;
}

void insert_middle(int value, int new_num)
{
	struct node *temp = head;
	struct node *new = (struct node*) malloc(sizeof(struct node));
	new->data = new_num;
	
	
	while(temp != NULL && temp->data != value)
	{
		temp = temp->next;
	}

	if(temp == NULL)
	{
		printf("List doesnt contain the value you gave.\n\n");
		return;
	}

	new->next = temp->next;
	temp->next = new;
	
    head = head;
	print();
}

struct node* insert_end(int num)
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
	
    head = head;
	print();
}

void delete(int delete)
{
	struct node *temp = head;
	if(head == NULL)
	{
		printf("The list is empty.\n\n");
		return;
	}
	
    else if(head->data == delete)
    {
        if(head->next == NULL)
        {
            head = NULL;
		    free(temp);
            print();
            return;
        }
        else
        {
            head = head->next;
            free(temp);
            print();
            return;
        }
    }
    if(temp->next != NULL)
	{
		while(temp->next->data != delete)
		{
			temp = temp->next;
		}
    }
		
	if(temp->next == NULL)
	{
		printf("List doesnt contain the value you gave.\n\n");
		return;
	}
	
	struct node *temp2 = temp->next;
	temp->next = temp->next->next;
	free(temp2);
	
	print();
}

int main(void)
{
	int n, node, command;
	
	printf("The command table:- \n\n\n");
	
	printf("         |(1) at the begining.\n");
	printf("insert - |(2) after first encountering a given node.\n");
	printf("         |(3) in the end.\n\n");
	
	printf("display - |(4) for printing its contents.\n");
	printf("          |(5) for checking if a given content is in the list. \n\n");
	
	printf("delete - |(6) any given value encountered first.\n\n");
	
	do
	{
		printf("Enter what function you want call (0 for exit): ");
		scanf("%d", &command);
		
		switch (command)
		{
			case 0: break;
				
			case 1: 
				printf("Enter the value to insert: ");
				scanf("%d", &n);
				insert_begin(n);
                print();
				break;
				
			case 2:	printf("Enter the value to insert: ");
				scanf("%d", &n);
				printf("after which node data: ");
				scanf("%d", &node);
				insert_middle(node, n);
				break;
				
			case 3:	printf("Enter the value to insert: ");
				scanf("%d", &n);
				insert_end(n);
				break;
				
			case 4: print();
				break;
				
			case 5: printf("Enter the value that is to be searched: ");
				scanf("%d", &n);
				check(n);
				break;
				
			case 6: printf("Enter the value to delete: ");
				scanf("%d", &n);
				delete(n);
				break;
				
			default: printf("Wrong value entered! \n");
				 printf("Please try again later.\n");
				 return 1;
		}
	}while(command != 0);
}
