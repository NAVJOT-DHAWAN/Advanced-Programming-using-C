#include<stdio.h>
void print_array(int a[],int left,int right)
{
   for(int i=left;i<=right;i++)
   {
       printf("%d ",a[i]);
   }
   printf("\n");
}

void merge(int a[],int left,int mid,int right)
{
   int i,j,k;
   int n1=mid-left+1;
   int n2=right-mid;
   int Left[n1],Right[n2];
   
   for(i=0;i<n1;i++)
   Left[i]=a[left+i];

   for(j=0;j<n2;j++)
   Right[j]=a[mid+1+j];
   i = 0; 
  j = 0; 
  k = left; 
  while (i < n1 && j < n2)
  {
    if (Left[i] <= Right[j])
      a[k++] = Left[i++];
    else
      a[k++] = Right[j++];
  }

  /* Copy the remaining elements of L[], if there are any */
  while (i < n1)
    a[k++] = Left[i++];

  /* Copy the remaining elements of R[], if there are any */
  while (j < n2)
    a[k++] = Right[j++];
}

void mergeSort(int a[],int left,int right)
{
   int i;
   if(left<right)
   {
       int mid=left+(right-left)/2;
       printf("middle element is %d at index %d: \n",a[mid],mid);
       printf("Left half : \n");
       print_array(a,left,mid);
       mergeSort(a,left,mid);
       printf("Right half : \n");
       print_array(a,mid+1,right);
       mergeSort(a,mid+1,right);
       merge(a,left,mid,right);
       printf("After merging sorted sub-array : \n");
       print_array(a,left,right);
   }
}
int main()
{
    int arr[]={24,17,13,22,19,21,16,12};
    int size=sizeof(arr)/sizeof(int);
    printf("Given array is :\n");
    print_array(arr,0,size-1);
    mergeSort(arr, 0, size - 1);

    printf("\nSorted array is :\n");
  print_array(arr,0,size-1);
  return 0;
}