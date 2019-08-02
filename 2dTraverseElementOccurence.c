#include<stdio.h>
int fun(int c1,int c2,int rows,int cols,int a[rows][cols],int num)
{
    static int c=0;
    if(c1==rows||c2<0||c2==cols)
    {
        return c;
    }
    else{
        //printf("%d ",a[c1][c2]);
        if(a[c1][c2]==num)
        {
            c++;
        }
        c=fun(c1+1,c2-1,rows,cols,a,num);
        c=fun(c1+1,c2+1,rows,cols,a,num);
    }
    return c;
}
int main()
{
    int rows,cols,c1,c2,num;
    scanf("%d%d",&rows,&cols);
    int a[rows][cols];
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    scanf("%d%d%d",&c1,&c2,&num);
    int count=fun(c1,c2,rows,cols,a,num);
    printf("%d occured %d times",num,count);
    return 0;
}