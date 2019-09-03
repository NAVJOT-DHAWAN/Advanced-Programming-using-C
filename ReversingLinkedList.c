#include<stdio.h>
#include<stdlib.h>
struct Node* root;
struct Node
{
	int data;
	struct Node* link;
};

void add()
{
	struct Node* temp;
	temp=(struct Node*)malloc(sizeof(struct Node));
	
	printf("Enter Node data\n");
	scanf("%d",&temp->data);
	temp->link=NULL;
	
	if(root==NULL)
	{
		root=temp;
	}
	else
	{
		struct Node* ptr;
		ptr=root;
		
		while(ptr->link!=NULL)
		{
			ptr=ptr->link;
		}
		ptr->link=temp;
	}
}

void Reverse()
{
	struct Node *curr=root;
	struct Node *prev=NULL,*next=NULL;
	
	while(curr!=NULL)
	{
		next=curr->link;
		curr->link=prev;
		prev=curr;
		curr=next;
	}
	root=prev;
}

void Display()
{
	struct Node* temp;
	temp=root;
	
	while(temp!=NULL)
	{
		printf("%d ",temp->data);
		temp=temp->link;
	}
	printf("\n");
	
}

int main()
{
	add();
	add();
	add();
	add();
	add();
	
	Reverse();
	Display();
	return 0;
}