#include<stdio.h>
void isUniqueChars(char *str)
{
   int freq=1;
   char ch;
   for(int i=0;str[i]!='\0';i++)
   {
     ch=str[i];
     for(int j=i+1;str[j]!='\0';j++)
     {
       if(str[j]==ch)
       {
         freq++;
         break;
       }
     }
     if(freq!=1)
       break;
   }
  if(freq==1)
    printf("YES\n");
  else
    printf("NO\n");
}

int main()
{
	char str1[]="Codequotient";
	char str2[]="coding";
	isUniqueChars(str1);
	isUniqueChars(str2);
	return 0;
}