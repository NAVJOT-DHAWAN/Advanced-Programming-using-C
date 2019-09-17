#include<stdio.h>
#include<string.h>
void sortStrings(int num, char str[][10])
{
   char temp[50];
   for(int i=0;i<num-1;i++)
   {
     
     for(int j=i+1;j<num;j++)
     {
       if(strcmp(str[i],str[j])>0)
       {
         strcpy(temp,str[i]);
         strcpy(str[i],str[j]);
         strcpy(str[j],temp);
       }
     }
   }
  
  for(int i=0;i<num;i++)
  {
    if(i==num-1)
      printf("%s",str[i]);
    else
      printf("%s ",str[i]);
  }
   
}

int main()
{
  
    char str[5][10]={"hi","cat","ate","my","homework"};
    sortStrings(5,str);
   
  return 0;
}
