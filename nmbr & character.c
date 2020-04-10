#include<stdio.h>
int main()
{
    int i,l,k=0;
    char a[100],b[100];
    scanf("%s",a);
    l=strlen(a);
    for(i=0;i<l;i++)
    {
        b[k]=a[i]+65;
        k++;
    }
    b[k]='\0';
    printf("%s",b);
}
