#include<stdio.h>
#define size 5

int a[size];
int top1=-1,top2=size;


int push1(int item)
{
  
  if(top1<top2-1)
  {
	  ++top1;
	  a[top1] = item;
   printf("Stack 1 Pushed=%d Top=%d\n",item,top1);
   
  //printf("Top is now at %d\n", top);
  }
  else
	  printf("Overflow in 1st Stack\n");
}

int pop1()
{
	if(top1>-1)
    {
		return a[top1--];
	}
	else
	{
		printf("Underflow in 1st Stack\n");
		return -1;
	}
}

int peek1()
{
	if(top1<0)
	{
		printf("No elements are there to peek in stack1\n");
		return -1;
	}
	printf("Peeked top element from 1st Stack - ");
	return a[top1];
}
int push2(int item)
{
	
	if(top1<top2-1)
  {
	  --top2;
	  a[top2] = item;
      printf("Stack 2 Pushed=%d Top=%d\n",item,top2);
      
  
  }
  else
	  printf("Overflow in 2nd Stack\n");
}

int pop2()
{
	if(top2<size)
    {
		return a[top2++];
	}
	else
	{
		printf("Underflow in 2nd Stack\n");
		return -1;
	}
}

int peek2()
{
	if(top2==size)
	{
		printf("No elements are there to peek in stack2\n");
		return -1;
	}
	printf("Peeked top element from 2nd Stack - ");
	return a[top2];
}
int main()
{
	push1(1);
	push2(10);
	push1(2);
	push2(18);
	push2(3);
	push2(90);
	push1(7);
	push1(11);
	push2(80);
	
	printf("Popped - %d\n",pop1());
	printf("Popped - %d\n",pop2());
	printf("Popped - %d\n",pop1());
	printf("%d\n",pop1());
	printf("%d\n",peek2());
	printf("%d\n",peek1());
	return 0;
}