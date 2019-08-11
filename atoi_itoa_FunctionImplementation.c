#include<stdio.h>
#include<string.h>

void itoa(int num, char* result)
{
   sprintf(result,"%d",num);
}

int atoi(char *str)
{
   int result=0;
   int sign=1; 
   int i=0;
   if(str[i]=='-')
   {
     sign=-1;
     i++;
   }
  for(;str[i]!='\0';i++)
  {
    result=result*10+str[i]-'0';
  }
  return sign*result;
}

int main()
{
	int num=100;
	char str[]="135";
	char result[20]="";
	itoa(num,result);
	printf("String converted to integer %d",atoi(str));
	return 0;
}
	
	
