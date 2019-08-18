#include<stdio.h>
#include<string.h>
# define size 10

int a[size],top=-1;

void push(int item)
{
	a[++top]=item;
}
int pop()
{
	return a[top--];
}
int peek()
{
	return a[top--];
}

int main()
{
	char s[]="Hello World coding is fun";
	int l=strlen(s);
	int j=0,temp=0;
	for(int i=0;i<l;i++)
	{
		if(l%2!=0)
		{
			if(i<l/2)
			{
				push(s[i]);
			}
			else if(i==l/2)
			{
				continue;
			}
			else
			{
				j=pop();
				temp=s[i];
				s[i]=j;
				s[l-i-1]=temp;
			}
		}
		
		else
		{
			if(i<l/2)
			{
				push(s[i]);
			}
			
			else
			{
				j=pop();
				temp=s[i];
				s[i]=j;
				s[l-i-1]=temp;
			}
		}
	}
	printf("After reversing String becomes %s",s);
	return 0;
}