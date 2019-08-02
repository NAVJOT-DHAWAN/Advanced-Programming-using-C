#include<stdio.h>
void moveElements(int a[], int n)
{
  int i=0,c=0;
  while(i<(n-c)){
    if(a[i]<0)
    {
      int t=a[i];
      for(int j=i;j<n-1;j++)
      {
        a[j]=a[j+1];
      }
      a[n-1]=t;
      c++;
    }
    else
      i++;
  }
  for(int j=0;j<n;j++)
  {
      printf("%d ",a[i]);
  }
  
}
int main()
{

    int a[]={-1,6,7,-2,8,-3,9,10};
   moveElements(a,8);
    return 0;
}