#include<stdio.h>
int main()
{
    int i,j,b,c,k=1,a,aa[1000],bb[1000];
    while(1)
    {
        printf("Enter number of elements in array:");
        scanf("%d",&a);
        for(i=1; i<=a; i++)
        {
            scanf("%d",&aa[i]);
        }
        printf("Enter the inserted number and index number:");
        scanf("%d %d",&b,&c);
        bb[c]=b;
        for(j=1; j<=a+1; j++)
        {
            if(j!=c)
            {
                bb[j]=aa[k];
                k++;
            }
        }
        for(j=1; j<=a+1; j++)
        {
            printf("%d ",bb[j]);
        }
        printf("\n");
    }
}
