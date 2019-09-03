#include<stdio.h>
#include<stdlib.h>
struct Node* root=NULL;
int len=0;
struct Node
{
	int data;
	struct Node* link;
};

int isEmpty()
{
	if(root==NULL)
		return 1;
	else
		return 0;
}

void push()
{
	struct Node* ptr=(struct Node*)malloc(sizeof(struct Node));
	//ptr->data=num;
	printf("Enter data to be pushed to stack\n");
	scanf("%d",&ptr->data);
	ptr->link=NULL;
	printf("Pushed = %d\n",ptr->data);
	if(root==NULL)
	{
		root=ptr;
	}
	else
	{
		ptr->link=root;
		root=ptr;
	}
	
}

void pop()
{
	struct Node* temp;
	
	
	if(isEmpty())
	{
		printf("Stack is Empty\n");
		exit(1);
	}
	else
	{
		temp=root;
		printf("Popped = %d\n",temp->data);
		root=temp->link;
		temp->link=NULL;
		free(temp);
	}
}

int peek()
{
	if(!isEmpty())
		return root->data;
	else
		exit(1);
}

void Display()
{
	struct Node* temp;
	temp=root;
	if(temp==NULL)
		printf("Stack is Empty\n");
	
	else{
	while(temp!=NULL)
	{
		printf("%d ",temp->data);
		temp=temp->link;
	}
	printf("\n");
	}
}
int main()
{
	printf("1.Push\n");
	printf("2.Pop\n");
	printf("3.Peek\n");
	printf("4.Display\n");
	printf("4.Exit\n");
	int choice,p;
	
	
	while(1)
	{
		printf("Enter your choice\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
			push();
			break;
			
			case 2:
			pop();
			break;
			
			case 3:
			p=peek();
			printf("Peeked = %d\n",p);
			break;
			
			case 4:
			Display();
			break;
			case 5:
			exit(1);
		}
	}
return 0;
}