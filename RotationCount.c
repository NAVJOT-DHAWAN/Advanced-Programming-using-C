#include<stdio.h>
int rotationCount(int a[], int n)
{
  int i=0;
  int j=n-1;
  if(j==i)
    return i;
  
  while(i<j)
  {
    if (i==0&&j==1) 
        return -1;
    int mid=i+(j-i)/2;
    if(mid<j&&a[mid+1]<a[mid])
      return mid+1;
    else if(mid>i&&a[mid]<a[mid-1])
      return mid;
    else if(a[mid]>a[j])
      i=mid+1;
    else
      j=mid-1;
  }
}
int main()
{
    int a[]={15,18,3,4,6,12};
    printf("%d",rotationCount(a,6));
    return 0;
}