#include<stdio.h>
int main()
{
    int a[100],n,i;
    printf("Enter the number number of the elements:\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("Elements:%d ",a[i]);
    }
}
