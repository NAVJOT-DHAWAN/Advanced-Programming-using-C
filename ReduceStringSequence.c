#include<stdio.h>
void reduceSequence(char *str, char ch)
{
   if(str[0]=='\0')
     return;
   if(str[0]==ch&&str[1]==ch)
   {
     int i=0;
     while(str[i]!='\0')
     {
       str[i]=str[i+1];
       i++;
     }
     reduceSequence(str,ch);
   }
  reduceSequence(str+1,ch);
}

int main()
{
	char s1[]="aabbcdeaaaaaabd";
	char c1='a';
	char s2[]="xyzxyzxyz";
	char c2='x';
	reduceSequence(s1,c1);
	printf("%s\n",s1);
	reduceSequence(s2,c2);
	printf("%s\n",s2);
	return 0;
}
