#include<stdio.h>
#include<string.h>
int strAtEnd(char *str1, char* sub)
{
   int l1=strlen(str1);
   int l2=strlen(sub);
   int i=l1-l2;
   int k=0,j=0;
   while(str1[i]!='\0')
  {
    k=i;
    while(sub[j]!='\0')
    {
      if(str1[k]!=sub[j])
        break;
      else
      {
        j++;
        k++;
      }
    }
    if(sub[j]=='\0')
      return 1;
    else{
      i++;
      j=0;
    }
  }
  return 0;
}

int main()
{
	char s1[]="JustLoveToCode";
	char s2[]="Code";
	int x=strAtEnd(s1,s2);
	printf("%d",x);
	return 0;
}