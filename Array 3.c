#include<stdio.h>
int main()
{
    int a[100],n,i,sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        sum+=a[i];
    }
    printf("Sum of the elements:%d",sum);
    return 0;
}
