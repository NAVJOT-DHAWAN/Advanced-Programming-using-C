#include<stdio.h>
#include<string.h>
int strstrCode(char *str1, char *sub)
{
    int i=0,j=0,k;
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
      return i;
    else{
      i++;
      j=0;
    }
  }
  return -1;
}

int main()
{
	char s1[]="JustLoveToCode";
	char s2[]="Love";
	int x=strstrCode(s1,s2);
	printf("%d",x);
	return 0;
}