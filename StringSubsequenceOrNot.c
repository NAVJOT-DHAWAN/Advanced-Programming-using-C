#include<stdio.h>
#include<string.h>
void strSubsequence(char *str, char* match)
{
  int c=0;
  int i=strlen(str)-1;
  int m=strlen(match)-1;
	while(i>=0)
    {
      if(m==0)
      {
        c=1;
        break;
      }
      if(str[i]==match[m])
      {
        i--;
        m--;
      }
      else
      {
        i--;
      }
    }
  if(c==1)
    printf("YES\n");
  else
    printf("NO\n");
}

int main()
{
	char s1[]="CodeQuotient";
	char c1[]="CQ";
	char s2[]="ABCDPQRST";
	char c2[]="TCA";
	strSubsequence(s1,c1);
	strSubsequence(s2,c2);
	return 0;
}