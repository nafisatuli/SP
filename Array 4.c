#include<stdio.h>
int main()
{
    int a[100],n,i;
    int b,c;
    printf("Enter the number of Elements:\n");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    b=a[0];
    c=a[0];
    for(i=1; i<n; i++)
    {
        if(a[i]>b)
        {
            b=a[i];
        }
        if(a[i]<c)
        {
            c=a[i];
        }
    }
    printf("The maximum element:%d\n",b);
    printf("The minimum element:%d\n",c);

}
