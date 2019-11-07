#include<stdio.h>
void calculateSum(int r,int c,int a[r][c])
{
    int k = 0;
    int sum = 0;
    while(k < c)
    {
        int l[100];
        int x = 0;
        for(int i=0;i<r;i++)
        {
            int max1 = a[i][0];
            int p = 0;
            for(int j=1;j<c;j++)
            {
                if(a[i][j] >= max1)
                {
                   max1 = a[i][j];
                   p = j;
                }
            }
            a[i][p] = -3267;
            l[x++] = max1;
            /*for(int i=0;i<r;i++)
            {
                for(int j=0;j<c;j++)
                {
                    printf("%d ",a[i][j]);
                }
                printf("\n");
            }*/
        }
      int max2 = -770;
      for(int i=0;i<x;i++)
      {
         if(l[i]>max2)
         {
             max2 = l[i];
         }
         printf("%d ",l[i]);
      }
      sum = sum + max2;
      k++;
    }

    printf("Sum=%d",sum);

}

int main()
{
    int rows,cols;
    printf("enter rows\n");
    scanf("%d",&rows);
    printf("enter columns\n");
    scanf("%d",&cols);
    int arr[rows][cols];
    printf("Enter elements\n");
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }

    calculateSum(rows,cols,arr);
    return 0;
}