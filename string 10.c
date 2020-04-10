#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    int w=0,i,l,t,n;
    for(t=0;t<3;t++)
    {
    gets(a);
    l=strlen(a);
    for(i=0; i<l; i++)
    {
        if(a[i]==' '&&a[i-1]>'a'&&a[i-1]<'z')
        {
            w++;
        }
    }
    if(a[i]=='\0')
        printf("Word:%d\n",w+1);
    else
        printf("Word:%d\n",w);
     w=0;
    }
}
