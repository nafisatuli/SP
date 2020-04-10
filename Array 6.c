#include<stdio.h>
int main()
{
    int a[100],i,n,even=0,odd=0;
    printf("Enter numbers:\n");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0; i<n; i++)
    {
        if(a[i]%2==0)
        {
            even++;
        }
        else
            odd++;
    }
    printf("Even:%d\nOdd:%d\n",even,odd);

}
