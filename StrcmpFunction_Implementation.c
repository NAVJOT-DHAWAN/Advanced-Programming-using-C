#include<stdio.h>
int strcmp(const char *str1, const char *str2) 
{
  int c=0;
   while(*str1)
   {
     if(*str1!=*str2)
      {
         c=-1;
         break;
      }
     else
     {
       c=1;
     }
     
     *str1++;
     *str2++;
   }
   if(c==1)
    return 0;
   else
    return *(const unsigned char*)str1 - *(const unsigned char*)str2;
}

int main()
{
    char *s1="Coding";
    char *s2="Coding";
    printf("%d",strcmp(s1,s2));
    return 0;
}
