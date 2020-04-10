#include<stdio.h>
long long fnc(int n);
void strong(int low,int high);
int main()
{
    int low, high;

    printf("Enter lower limit: ");
    scanf("%d", &low);
    printf("Enter upper limit: ");
    scanf("%d", &high);

    printf("All strong numbers between %d to %d are: \n", low, high);
    strong(low, high);

    return 0;
}
void strong(int low,int high)
{
    long long sum,n;
    while(low!=high)
    {
        sum=0;
        n=low;
        while(n!=0)
        {
            sum+=fnc(n%10);
            n/=10;
        }
        if(low==sum)
        {
            printf("%d ",low);
        }
            low++;
        }
        }
long long fnc(int n)
{
    if(n==0)
        return 1;
    else
        return (n*fnc(n-1));
}
