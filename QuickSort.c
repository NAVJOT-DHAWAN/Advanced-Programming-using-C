#include<stdio.h>
void printArray(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
}

void swap(int *a,int *b)
{
    int t=*a;
    *a=*b;
    *b=t;
}
int partition(int a[],int low,int high)
{
    int pivot=a[high];
    int i=(low-1);
    for(int j=low;j<=high-1;j++)
    {
        if(a[j]<=pivot)
        {
            i++;
            swap(&a[i],&a[j]);
        }
    }
    swap(&a[i+1],&a[high]);
    return (i+1);
}
void quickSort(int a[],int low,int high)
{
    if(low<high)
    {
        int pivot_index=partition(a,low,high);
        printf("Pivot element is %d \n",a[pivot_index]);
        printf("Array after pivot partitioning : \n");
        printArray(a,8);

        quickSort(a,low,pivot_index-1);
        quickSort(a,pivot_index+1,high);
    }
}
int main()
{
    int a[]={17,13,20,16,19,24,22,21};
    int n=sizeof(a)/sizeof(int);
    printf("Given array: \n");
    printArray(a,n);
    quickSort(a, 0, n-1);
    printf("Sorted array: \n");
    printArray(a,n);

    return 0;
}