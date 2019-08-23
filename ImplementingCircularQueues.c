#include<stdio.h>
#define size 5
    int a[size];
	int front=-1,rear=-1;

	void enQueue(int num)
	{
		
		if(front==0&&rear==(size-1)||rear==(front-1))
		{
			printf("Queue is already full more elements cannot be added\n");
			return;
		}
		
		if(rear==-1&&front==-1)
		{
			
			front=0;
			rear=0;
			a[rear]=num;
		}
		
		
		else if(rear==(size-1)&&front!=0)
		{
			rear=0;
			a[rear]=num;
		}
		
		else
		{
			a[++rear]=num;
		}
	}
	
	int dequeue()
	{
		if(front==-1)
		{
			printf("Queue is already Empty\n");
			return -1;
		}
		int data=a[front];
		if(front==rear)
		{
			front=rear=-1;
		}
		else if(front==(size-1))
		{
			front=0;
		}
		else
			front++;
		return data;
	}
	
	void displayQueue()
	{
		if(front==-1)
		{
			printf("Queue is already Empty\n");
			return;
		}
		
		printf("Elements in Queue are:\n");
		if(rear>=front)
		{
			for(int i=front;i<=rear;i++){
				printf("%d ",a[i]);
				//printf("%d---",i);
			}
		}
		else
		{
			for(int j=front;j<size;j++)
				printf("%d ",a[j]);
			for(int k=0;k<=rear;k++)
				printf("%d ",a[k]);
		}
		printf("\n");
	}

	int main()
	{
		//displayQueue();
		enQueue(1);
		enQueue(2);
		enQueue(3);
		enQueue(4);
		enQueue(5);
		
		displayQueue();
		printf("Deleted Value=%d\n",dequeue());
		enQueue(100);
		displayQueue();
		return 0;
	}
