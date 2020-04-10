#include<stdio.h>
int main()
{
    int i,j,b,a,aa[1000];
   while(1)
   {
        printf("Enter number of elements in array:");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        scanf("%d",&aa[i]);
    }
    printf("Enter index number delete:");
    scanf("%d",&b);
    for(j=1;j<=a;j++)
    {
        if(j!=b)
        {
            printf("%d ",aa[j]);
        }
    }
    printf("\n");
   }
}
