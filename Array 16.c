#include<stdio.h>
int main()
{
    int a1[100],a2[100],a3[100],i,j,n,m;
    scanf("%d",&n);
    for(i=0,j=0;i<n;i++,j++)
    {
        scanf("%d\n",&a1[i]);
        a3[j]=a1[i];
    }
    scanf("%d",&m);
    for(i=0;i<m;i++,j++)
    {
        scanf("%d",&a2[i]);
        a3[j]=a2[i];
    }
    for(j=0;j<n+m;j++)
    printf("%d ",a3[j]);

}
