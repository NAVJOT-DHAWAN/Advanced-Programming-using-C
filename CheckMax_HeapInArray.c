#include<stdio.h>
int checkMaxHeap(int arr[],int size)
{
	int k=size/2;
	int l,r,max,flag=0;
	for(int i=k-1;i>=0;i--)
	{
		l=((i<<1)|1);
		r=((i<<1)+2);
		max=0;
		if(l<size&&r<size)
		{
			if(arr[l]<arr[r])
				max=arr[r];
			else
				max=arr[l];
			
			if(arr[i]<max)
			{
				flag=1;
				break;
			}
		}
		//printf("l=%d  r=%d max=%d\n",l,r,max);
		//printf("%d\n",max);
	}
	
	if(flag==1)
	    return 0;
    
	else
		return 1;
}
int main()
{
	int size;
	scanf("%d",&size);
	int a[size];
	for(int i=0;i<size;i++)
	  scanf("%d",&a[i]);
  
	if(checkMaxHeap(a,size))
	{
		printf("It is a Max Heap");
	}
	else
	{
		printf("It is Not a Max Heap");
	}
	
	return 0;
}