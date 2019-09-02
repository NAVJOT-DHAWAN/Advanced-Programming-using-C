#include<stdio.h>
#include<stdlib.h>
struct Node* head=NULL;
int len=0;
struct Node
{
	int data;
	struct Node* link;
};

void insertAtBegin()
{
	struct Node* temp;
	temp=(struct Node*)malloc(sizeof(struct Node));
	
	printf("Enter Node data\n");
	scanf("%d",&temp->data);
	temp->link=NULL;
	
	if(head==NULL)
	{
		head=temp;
	}
	
	else
	{
		temp->link=head;
		head=temp;
	}
}
void Append()
{
	struct Node* temp;
	temp=(struct Node*)malloc(sizeof(struct Node));
	
	printf("Enter Node data\n");
	scanf("%d",&temp->data);
	temp->link=NULL;
	
	if(head==NULL)
	{
		head=temp;
	}
	else
	{
		struct Node* ptr;
		ptr=head;
		
		while(ptr->link!=NULL)
		{
			ptr=ptr->link;
		}
		ptr->link=temp;
	}
}

int length()
{
	struct Node* temp;
	int count=0;
	temp=head;
	
	while(temp!=NULL)
	{
		count++;
		temp=temp->link;
	}
	return count;
}

void Display()
{
	struct Node* temp;
	temp=head;
	if(temp==NULL)
		printf("List is Empty\n");
	
	else{
	while(temp!=NULL)
	{
		printf("%d ",temp->data);
		temp=temp->link;
	}
	printf("\n");
	}
}

void insertAfter()
{
	struct Node *temp,*p;
	int loc;
	
	printf("Enter location where you want to insert a Node\n");
	scanf("%d",&loc);
	
	if(loc>length())
		printf("Invalid Location because it is greataer than Length of List\n");
	
	else
	{
		int i=1;
		p=head;
		while(i<loc)
		{
			p=p->link;
			i++;
		}
		temp=(struct Node*)malloc(sizeof(struct Node));
		printf("Enter Node data\n");
		scanf("%d",&temp->data);
		temp->link=NULL;
		temp->link=p->link;
		p->link=temp;
	}
}
void delete()
{
	struct Node* temp;
	int loc;
	printf("Enter location you want to delete\n");
	scanf("%d",&loc);
	if(loc>length())
		printf("Invalid Location to delete\n");
	
	else if(loc==1)
	{
		temp=head;
		head=temp->link;
		temp->link=NULL;
		free(temp);
	}
	
	else
	{
		struct Node *p,*q;
		int i=1;
		p=head;
		while(i<loc-1)
		{
			p=p->link;
			i++;
		}
		q=p->link;
		p->link=q->link;
		q->link=NULL;
		free(q);
	}
}
int main()
{
	
	    int choice;
	    printf("1.Append\n");
		printf("2.Insert Node At Begin\n");
	    printf("3.Insert After a particular Node\n");
		printf("4.Length of Linked List\n");
		printf("5.Display\n");
		printf("6.Delete a Node\n");
		printf("7.Exit\n");
	while(1)
	{
		
		
		printf("Enter your choice : ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
			Append();
			break;
			
			case 2:
			insertAtBegin();
			break;
			
			case 3:
			insertAfter();
			break;
			
			case 4:
			len=length();
			printf("Length = %d",len);
			break;
			
			case 5:
			Display();
			break;
			
			case 6:
			delete();
			break;
			
			case 7:
			exit(1);
			default:
			printf("Invalid choice");
		}
	}
	
	return 0;
}