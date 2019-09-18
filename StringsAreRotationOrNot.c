// return 1 for YES and 0 for NO.
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int isRotation(char *str1, char* str2)
{
  int l1=strlen(str1);
  int l2=strlen(str2);
  if(l1!=l2)
    return 0;
  
  char *temp=(char*)malloc(sizeof(char)*(l1*2)+1);
  void *p;
  strcat(temp,str1);
  strcat(temp,str1);

  p=strstr(temp,str2);
  free(temp);

  if(p!=NULL)
    return 1;
  else
    return 0;
  
}

int main()
{
   char a[]="coders";
   char b[]="rscode";
   int t=isRotation(a,b);
   if(t==1)
    printf("YES");
   else
    printf("NO");
  return 0;
}
