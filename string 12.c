#include<stdio.h>
#include<string.h>
int main()
{
    int i,k=0,l,x=0;
    char a[100],aa[100];
    while(1)
    {
        scanf("%s",a);
    l=strlen(a);
    k=0;
    for(i=l-1;i>=0;i--)
    {
        aa[k]=a[i];
        k++;
    }
   for(i=l-1;i>=0;i--)
    {
       if(a[i]==aa[i])
       x++;
    }
    if(x==l)
    printf("palindrome\n");
    else printf("not\n");
    x=0;
    }
}


