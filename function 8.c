#include<stdio.h>
int arm1(int low);
void fnc1(int low,int high);
int main()
{
    int low, high;

    printf("Enter lower limit: ");
    scanf("%d", &low);
    printf("Enter upper limit: ");
    scanf("%d", &high);
    fnc1(low, high);

    return 0;
}
void fnc1(int low,int high)
{
    printf("All armstrong numbers between %d & %d:\n",low,high);
    while(low<=high)
    {
        if(arm1(low))
        {
            printf("%d ",low);
        }
        low++;
    }
}

int arm1(int low)
{
    int n,d,sum;
    n=low;
    sum=0;
    while(n!=0)
    {
        d=n%10;
        sum+=d*d*d;
        n/=10;
    }
    if(low==sum)
        return 1;
    else
        return 0;
}
