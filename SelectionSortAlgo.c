#include<stdio.h>
int main()
{

  int t,index;
  scanf("%d",&t);
  while(t>0)
  {
    int n;
    int pass=0;
    scanf("%d",&n);
    int a[n];
    for(int k=0;k<n;k++)
      scanf("%d",&a[k]);
    for(int i=0;i<n-1;i++)
    {
      index=i;
      for(int j=i+1;j<n;j++)
      {
        if(a[index]>a[j])
        {
          index=j;
          //pass++;
        }
        
      }
      if(a[index]!=a[i]){
      int temp=a[index];
      a[index]=a[i];
      a[i]=temp;
      pass++;
      }
    }
    //for(int i=0;i<n;i++)
    printf("%d\n",pass);
    t--;
  }
  return 0;
  }