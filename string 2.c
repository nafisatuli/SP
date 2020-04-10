#include<stdio.h>
#include<string.h>
int main()
{
    char a[100],b[100];
    int l,i,j=0;
    gets(a);
    l=strlen(a);
    for(i=0;i<l;i++)
    {
        b[j]=a[i];
        j++;
    }
    b[j]='\0';
    printf("Copy:%s",b);
}
