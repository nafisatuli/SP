#include<stdio.h>
int main()
{
    int a[100], i,l,k=0,z,j;
    char b[100];
    scanf("%d",&z);
    for(j=0;j<z;j++)
    scanf("%d",&a[j]);
    for(i=0;i<z;i++)
    {
        b[k]=a[i]+65;
        k++;
    }
    for(i=0;i<z;i++)
    {
        printf("%c",b[i]);
    }
}
