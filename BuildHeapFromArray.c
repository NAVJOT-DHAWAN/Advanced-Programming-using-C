#include<stdio.h>

void heapify(int a[],int size,int i)
{
	int l=((i<<1)|1);
    int r=((i<<1)+2);
	int max=i;
	
	if(l<size&&a[l]>a[i])
		max=l;
	/*else
		max=i;*/
	if(r<size&&a[r]>a[max])
		max=r;
	
	if(max!=i)
	{
		
		int temp;
	    temp=a[max];
	    a[max]=a[i];
	    a[i]=temp;
		heapify(a,size,max);
	}
}

void buildHeap(int a[],int n)
{
	int k=(n/2)-1;
	for(int i=k;i>=0;i--)
	{
		heapify(a,n,i);
	}
	
}
		
void printHeap(int a[],int n)
{
	printf("Array Representation in Heap:-\n");
	for(int i=0;i<n;i++)
		printf("%d ",a[i]);
}

int main()
{
	int arr[]={1,3,5,4,6,13,10,9,8,15,17};
	int n = sizeof(arr) / sizeof(arr[0]); 
	buildHeap(arr,n);
	printHeap(arr,n);
	return 0;
}