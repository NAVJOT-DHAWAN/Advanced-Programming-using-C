#include<stdio.h>
#include<stdlib.h>
struct Node* root;
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

void EnQueue()
{
	struct Node* ptr=(struct Node*)malloc(sizeof(struct Node));
	//ptr->data=num;
	printf("Enter data to be inserted in Queue\n");
	scanf("%d",&ptr->data);
	ptr->link=NULL;
	printf("Inserted = %d\n",ptr->data);
	if(root==NULL)
	{
		root=ptr;
	}
	else
	{
		struct Node* temp;
		temp=root;
		while(temp->link!=NULL)
		{
			temp=temp->link;
		}
		temp->link=ptr;
	}
	
}

void DeQueue()
{
	struct Node* temp;
	
	
	if(isEmpty())
	{
		printf("Queue is Empty\n");
		exit(1);
	}
	else
	{
		temp=root;
		printf("Deleted = %d\n",temp->data);
		root=temp->link;
		temp->link=NULL;
		free(temp);
	}
}

void Display()
{
	struct Node* temp;
	temp=root;
	if(temp==NULL)
		printf("Queue is Empty\n");
	
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
	printf("1.EnQueue\n");
	printf("2.DeQueue\n");
	printf("3.Display\n");
	printf("4.Exit\n");
	int choice,p;
	
	
	while(1)
	{
		printf("Enter your choice\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
			EnQueue();
			break;
			
			case 2:
			DeQueue();
			break;
			
			case 3:
			Display();
			break;
			
			case 4:
			exit(1);
		}
	}
	return 0;
}