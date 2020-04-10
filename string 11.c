#include<stdio.h>
#include<string.h>
int main()
{
    char a[100],b[100];
    int i,l;
    gets(a);
    l=strlen(a);
    for(i=0;i<l;i++)
    {
        b[i]=a[i];
    }
    for(i=l-1;i>=0;i--)
    {
        printf("%c",b[i]);
    }
}
