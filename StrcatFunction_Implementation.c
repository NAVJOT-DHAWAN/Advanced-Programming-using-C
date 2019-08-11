#include<stdio.h>
#include<string.h>

void strcatCode(char *str1, char *str2) 
{
   int l=strlen(str1);
   int c=strlen(str2);
  
  for(int i=0;i<c;i++)
  {
    str1[l]=str2[i];
    l++;
  }
  str1[l]='\0';
  printf("%s",str1);
}
int main()
{
    char s1[]="Hello";
    char s2[]="Coding";
    strcatCode(s1,s2);
    return 0;
}