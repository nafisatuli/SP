#include<stdio.h>
int main()
{
    int a,i,aa[1000],j,c,b;
    while(1)
    {
        scanf("%d",&a);
    c=0;
    for(i=0;i<a;i++)
    {
        scanf("%d",&aa[i]);
        if(aa[i]>c)
        {
            c=aa[i];
        }
    }
    b=aa[0];
    for(i=0;i<a;i++)
    {
         if(aa[i]>b&&aa[i]<c)
            b=aa[i];
    }
    printf("Second largest element:%d\n",b);
    }


}
