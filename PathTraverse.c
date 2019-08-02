#include<stdio.h>
void fun(int c1,int c2,int rows,int cols,int a[rows][cols])
{
    if(c1==rows||c2<0||c2==cols)
    {
        //printf("----out of bound---\n");
    }
    else{
        printf("%d ",a[c1][c2]);
        fun(c1+1,c2-1,rows,cols,a);
        fun(c1+1,c2+1,rows,cols,a);
    }
}
int main()
{
    int rows,cols,c1,c2;
    scanf("%d%d%d%d",&rows,&cols,&c1,&c2);
    int a[rows][cols];
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    fun(c1,c2,rows,cols,a);
    return 0;
}