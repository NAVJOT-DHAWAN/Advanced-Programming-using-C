#include<stdio.h>
int main()
{
	int num,k;
	printf("Enter a number\n");
	scanf("%d",&num);
	printf("Enter the bit to set\n");
	scanf("%d",&k);
	
	num=(num|(1<<(k-1)));
	
	printf("After setting the kth bit number becomes %d\n",num);
	
	return 0;
}