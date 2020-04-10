#include<stdio.h>
int isprime(int low);
void primes(int low,int high);
int main()
{
    int low,high;
    printf("Enter two numbers: ");
    scanf("%d %d",&low,&high);
    primes(low,high);
    return 0;
}
void primes(int low,int high)
{
    printf("All prime numbers between %d & %d:\n",low,high);
    while(low<=high)
    {
        if (isprime(low))
        {
            printf("%d ",low);
        }
        low++;
    }
}
int isprime(int low)
{
    int i;
    for(i=2;i<=low/2;i++)
    {
        if(low%i==0)
        {
            return 0;
        }
    }
    return 1;
}
