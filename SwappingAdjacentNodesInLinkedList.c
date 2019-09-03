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

void Swap()
{
	struct Node *temp=root;
	struct Node *p,*q;
	int loc1,loc2,i=1;
	printf("Enter location 1 for Swapping\n");
	scanf("%d",&loc1);
	printf("Enter location 2 for Swapping\n");
	scanf("%d",&loc2);
	
	while(i<loc1-1)
	{
		temp=temp->link;
		i++;
	}
	p=temp->link;
	q=p->link;
	
	p->link=q->link;
	q->link=p;
	temp->link=q;
}

void Display()
{
	struct Node* temp;
	temp=root;
	
	printf("After Swapping\n");
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
	add();
	Swap();
	Display();
	return 0;
}