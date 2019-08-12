#include<stdio.h>
#define size 5

int queue[size];
int front=0,rear=0;

int isFull()    // Queue is full
{
  return rear==(size);  
}


// Method to add an item to the queue.
int Enqueue(int num)
{
	if(isFull())
	{
		printf("Queue is already full more elements cannot be added to it \n");
		return -1;
	}
	printf("%d added to Queue\n",num);
    queue[rear++] = num;
    printf("Rear is now at %d\n", rear);
}

// Method to remove an item from queue.
int Deque()
{
  int temp;
  
  if(front<rear)
  {
  temp=queue[front++];
  printf("%d removed from Queue\n", temp);
  printf("Front is now at %d\n", front);
  return temp;
  }
  
  else       // Queue is Empty
  {
	  printf("Queue is empty\n");
	  return -1;
  }
}
int main()
{
	int temp;
	Enqueue(10);
	temp=Deque();
	Enqueue(5);
	temp=Deque();
	Enqueue(15);
	Enqueue(7);
	temp=Deque();
	Enqueue(9);
	Enqueue(11);
	temp=Deque();
	temp=Deque();
	temp=Deque();
	return 0;
}
