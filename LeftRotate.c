#include <stdio.h>

int main()
{

  int t,k=0;
  scanf("%d",&t);
  while(t>0){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
      scanf("%d",&a[i]);
    
    scanf("%d",&k);
    for(int i=0;i<k;i++)
    {
      int first=a[0];
      for(int i=0;i<n-1;i++)
      {
        a[i]=a[i+1];
      }
      a[n-1]=first;
    }
    for(int i=0;i<n;i++)
      printf("%d ",a[i]);
    printf("\n");
    t--;
  }
    
    return 0;
}