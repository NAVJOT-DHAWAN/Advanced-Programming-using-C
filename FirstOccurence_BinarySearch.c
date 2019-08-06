#include <stdio.h>
/* Include other headers as needed */
int firstOccurence(int a[],int l,int r,int key)
{
  if(l<r)
  {
    int mid=l+(r-l)/2;
    if(a[mid]>=key)
    {
      r=mid;
      return firstOccurence(a,l,r,key);
    }
    else
    {
      l=mid+1;
      return firstOccurence(a,l,r,key);
    }
  }
  return l;
}
int main()
{
    int t;
    scanf("%d",&t);

    while(t>0){
    int n,key,index;
    scanf("%d%d",&n,&key);
    int a[n];
    for(int i=0;i<n;i++)
      scanf("%d",&a[i]);
    
    index=firstOccurence(a,0,n-1,key);
    printf("%d\n",index);
     
     t--;
    }
    
    return 0;
}