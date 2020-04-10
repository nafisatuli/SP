#include<stdio.h>
int main()
{
    char a[100],b[100];
    int l,i,j=0;
    scanf("%s",a);
    l=strlen(a);
    for(i=0;i<l;i++)
    {
        if(i%2==0&&a[i]>=97&&a[i]<=122)
        {
            b[j]=a[i]-32;
            j++;
        }
        else
        {
            b[j]=a[i];
            j++;
        }
    }
    b[j]='\0';
    printf("%s",b);
}
