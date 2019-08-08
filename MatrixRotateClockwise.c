#include <stdio.h>

int main()
{

   int t;
   scanf("%d",&t);
  while(t>0)
  {
    int n;
    scanf("%d",&n);
    int a[n][n];
    for(int i=0;i<n;i++)
    {
      for(int j=0;j<n;j++)
      {
        scanf("%d",&a[i][j]);
      }
    }
    
    for(int i=0;i<n/2;i++)
    {
      for(int j=i;j<n-i-1;j++)
      {
        int temp=a[i][j];
        a[i][j]=a[n-j-1][i];
        a[n-j-1][i]=a[n-i-1][n-j-1];
        a[n-1-i][n-1-j] = a[j][n-1-i]; 
            a[j][n-1-i] = temp;
      }
    }
    for(int i=0;i<n;i++){
      for(int j=0;j<n;j++){
        if(j==n-1)
          printf("%d",a[i][j]);
        else
        printf("%d ",a[i][j]);
    }
      
      printf("\n");
  }
    printf("\n");
    t--;
  }
    return 0;
}