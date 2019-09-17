#include <stdio.h>

void print_int(int a)
{
    printf("%p\n",&a);
    unsigned char *ia=(unsigned char*)&a;
    int len=sizeof(a);
    
    for(int i=0;i<len;i++)
    {
        printf("%p %.2x %d\n",&ia[i],ia[i],i);
    }
    printf("%d",len);
}
int main()
{
    int a=12345;
    //scanf("%d",&a);
    print_int(a);
    return 0;
}