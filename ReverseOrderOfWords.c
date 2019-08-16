#include<stdio.h>
#include<string.h>
void revWordsOrder(char *str)
{
  int i,j,start,end,k=0;
  int length=strlen(str);
  end=length-1;
  char res[10000]="";
  for(i=length-1;i>=0;i--)
  {
    if(str[i]==' '||i==0)
    {
      if(i==0)
      {
        start=0;
      }
      else
      {
        start=i+1;
      }
      for(j=start;j<=end;j++)
      {
        res[k++]=str[j];
        
      }
      end=i-1;
      if(i>0)
      strcat(res," ");
      k++;
    }
    
  }
   strcpy(str,res);
}

int main()
{
	char s1[]="Code Quotient Loves Code";
	char s2[]="Hello Coders";
	revWordsOrder(s1);
	printf("%s\n",s1);
	revWordsOrder(s2);
	printf("%s\n",s2);
	return 0;
}
