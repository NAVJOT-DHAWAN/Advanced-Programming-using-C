#include<stdio.h>
#include<stdlib.h>
struct Node
{
	int data;
	struct Node* next;
};

void startOfLoop(struct Node *p,struct Node *head)
{
	int c=1;
	struct Node* q=head;
	while(p!=q)
	{
		p=p->next;
		q=q->next;
		c++;
	}
	printf("Loop starts from Node %d in List\n",c);
} 

void removeLoop(struct Node *p,struct Node *head)
{
	struct Node* q=head;
	while(p->next!=q->next)
	{
		p=p->next;
		q=q->next;
		
	}
	p->next=NULL;
	
}
void printList(struct Node* head)
{
	printf("After removing loop from the List\n");
	while(head!=NULL)
	{
		printf("%d ",head->data);
		head=head->next;
	}
}
struct Node* detectLoop(struct Node *head)
{
	struct Node *p=head,*q=head;
	while(p && q && q->next)
	{
		p=p->next;
		q=q->next->next;
		
		if(p==q)
		{
			//startOfLoop(p,head);
		    //removeLoop(p,head);
			return p;
		}
	}
	return NULL;
}

struct Node* newNode(int num)
{
	struct Node* temp=(struct Node*)malloc(sizeof(struct Node));
	temp->data=num;
	temp->next=NULL;
	return temp;
}
int main()
{
	struct Node *head=newNode(10);
	head->next=newNode(20);
	head->next->next=newNode(30);
	head->next->next->next=newNode(40);
	head->next->next->next->next=newNode(50);
	head->next->next->next->next->next=newNode(60);
	
	
	head->next->next->next->next->next->next = head->next->next->next;  //Firstly we are creating Loop by ourself
	
	struct Node *p=detectLoop(head);  //Function to detect Loop in list
	if(p!=NULL)
	{
		printf("Loop exists in the list\n");
		startOfLoop(p,head);
		removeLoop(p,head);
		printList(head);
	}
	else
	{
		printf("No Loop Exists in List\n");
	}
	return 0;
}
