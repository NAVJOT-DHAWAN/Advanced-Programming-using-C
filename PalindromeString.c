#include<stdio.h>
#include<string.h>
void isPalindrome(char *str)
{
  int i=0;
  int c=0;
  int length=strlen(str);
  for(i=0;i<length/2;i++)
  {
    if(str[i]!=str[length-i-1])
      c=1;
  }
  if(c==0)
    printf("YES");
  else
    printf("NO");
}

int main()
{
	char s="helloWorld";
	isPalindrome(s);
	return 0;
}