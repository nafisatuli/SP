#include<stdio.h>
#include<string.h>
int main()
{
    char a[100],b[100],c[100];
    int l,l2,i,k=0;
    gets(a);
    gets(b);
    l=strlen(a);
    l2=strlen(b);
    for(i=0;i<l;i++)
    {
        c[k]=a[i];
        k++;
    }
    for(i=0;i<l2;i++)
    {
        c[k]=b[i];
        k++;
    }
    c[k]='\0';
    printf("%s",c);
}
