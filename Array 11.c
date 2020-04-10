#include<stdio.h>
int main()
{
    int i,a,x;
    int aa[10000]={};
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        scanf("%d",&x);
        aa[x]++;
    }
     for(i=1;i<=a;i++)
    {
        if(aa[i]==1)
        printf("%d ",i);
    }
}
