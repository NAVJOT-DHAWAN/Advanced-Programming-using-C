#include<stdio.h>
int main()
{
	int num,count=0;
	printf("Enter a number\n");
	scanf("%d",&num);
	int n=num;
	while(num>0)
	{
		num=num&(num-1);
		count++;
	}
	
	printf("No. of set bits in %d are %d",n,count);
	
	return 0;
}