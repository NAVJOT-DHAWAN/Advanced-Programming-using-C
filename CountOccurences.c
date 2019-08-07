#include <stdio.h>

int binarySearch(int a[],int l,int r,int key)
{
  if(l<r)
  {
    int mid=l+(r-l)/2;
    if(a[mid]==key)
    {
      return mid;
    }
    else if(a[mid]>key)
    {
      r=mid-1;
      return binarySearch(a,l,r,key);
    }
    else
    {
      l=mid+1;
      return binarySearch(a,l,r,key);
    }
  }
  else
    return 0;
}
int OccurenceCount(int a[],int n,int key)
{
  int index=binarySearch(a,0,n-1,key);
  int count=1;
  int left=index-1,right=index+1;
  if(index==0)
    return 0;
  while(a[left]==key&&left>=0){
    count++;
    left--;
  }
  while(a[right]==key&&right<n){
    count++;
    right++;
  }
  return count;
}
int main()
{

  int t;
  scanf("%d",&t);
  while(t>0)
  {
    int n,key,index;
    scanf("%d%d",&n,&key);
    int a[n];
    for(int i=0;i<n;i++)
      scanf("%d",&a[i]);
    
    index=OccurenceCount(a,n,key);
    printf("%d\n",index);
    t--;
  }
    
    return 0;
}