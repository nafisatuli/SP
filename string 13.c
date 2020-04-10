#include<stdio.h>
#include<string.h>
int main()
{
    char a[100],b[100];
    int i,l,k=0,m,j;
    while(1)
    {
        m=0;
        gets(a);
        l=strlen(a);
        for(i=l-1;i>=0;i--)
        {
            b[k]=a[i];
            k++;
        }
        b[k]=' ';
        for(i=0;i<=k;i++)
        {
            if(b[i]==' '&&b[i-1]!=' ')
            {
                for(j=i;j>=0+m;j--)
                {
                    printf("%c",b[j]);
                }
                m=i+1;
            }
        }
    }
}
