#include<stdio.h>
int isAnagram(char *str1, char* str2)
{
  
   int first[26]={0},second[26]={0},c=0;
   while(str1[c]!='\0')
   {
     if(str1[c]>='A'&&str1[c]<='Z')
       first[str1[c]-'A']++;
     
     else
       first[str1[c]-'a']++;
     c++;
   }
   c=0;
   while(str2[c]!='\0')
   {
     if(str2[c]>='A'&&str2[c]<='Z')
       second[str2[c]-'A']++;
     
     else
       second[str2[c]-'a']++;
     c++;
   }
  for(c=0;c<26;c++)
  {
    if(first[c]!=second[c])
      return 0;
    
  }
  return 1;
}

int main()
{
	if(isAnagram("CodeQuotient","QuotientCode"))
		printf("YES\n");
	if(!isAnagram("Hello","Hillo"))
		printf("NO");
	return 0;
}
