#include<stdio.h>
#include<math.h>
int prime(int a);
int arm(int a);
int perfect(int a);
int main()
{
    int a,t;
    scanf("%d",&t);
    while(t--)
    {
    printf("Enter any number: ");
    scanf("%d",&a);
    if(prime(a))
    {
        printf("%d is prime\n",a);
    }
    else
    {
        printf("%d is not prime\n",a);
    }
    if(arm(a))
    {
        printf("%d is armstrong\n",a);
    }
    else
    {
        printf("%d is not armstrong\n",a);
    }
    if(perfect(a))
    {
        printf("%d is perfect\n",a);
    }
    else
    {
        printf("%d is not perfect\n",a);
    }
    }
}
int prime(int a)
{
    int i,root;
    if(a<2)
        return 0;
    if(a==2)
        return 1;
    if(a%2==0)
        return 0;
    root=sqrt(a);
    for(i=0;i<=root;i++)
    {
        if(a%i==0)
            return 0;
    }
    return 1;
}
int arm(int a)
{
    int d,sum=0,n;
    n=a;
    while(n!=0)
    {
        d=n%10;
        sum+=d*d*d;
        n=n/10;
    }
    return (a==sum);
}
int perfect(int a)
{
    int i,sum=0,n;
    n=a;
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
            sum+=i;
        }
    }
    return (a==sum);
}
