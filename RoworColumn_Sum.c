#include <stdio.h>

int main()
{
  
  int t;
  scanf("%d",&t);
  while(t>0)
  {
    int n,w,x,sum=0;
    char ch;
    scanf("%d%d%d%*c%c",&n,&w,&x,&ch);
    int row=n/w+1;
    int a[row][w];
    int k=0;
    for(int i=1;i<=row;i++)
    {
      for(int j=1;j<=w;j++)
      {
        k++;
        if(k<=n)
        a[i][j]=k;
        else
          a[i][j]=0;
      }
    }
     
    if(ch=='C')
    {
      
      for(int i=1;i<=row;i++)
      {
        sum=sum+a[i][x];
      }
    }
     else if(ch=='R'){
        for(int i=1;i<=w;i++)
      {
        sum=sum+a[x][i];
      }
     }
    
    
    printf("%d\n",sum);
    t--;
  }

   
    return 0;
}