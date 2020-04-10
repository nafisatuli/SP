#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    char ch,x[10001],a[10001];
    int l,i,p,k=0,sum=0,n;
    scanf("%c",&ch);
    if(ch=='B')
    {
        scanf("%s",x);
        l=strlen(x);
        for(i=l-1; i>=0; i--)
        {
            p=(x[i]-48)*pow(2,k);
            k++;
            sum=sum+p;
        }
        printf("%d\n",sum);
    }
    else if (ch=='O')
    {
        scanf("%s",x);
        l=strlen(x);
        for(i=l-1; i>=0; i--)
        {
            p=(x[i]-48)*pow(8,k);
            k++;
            sum=sum+p;
        }
        printf("%d\n",sum);
    }
    else if(ch=='H')
    {
        scanf("%s",a);
        l=strlen(a);
        for(i=l-1; i>=0; i--)
        {
            if(a[k]=='A')
            {
            p=(10)*pow(16,i);
            }
            else if(a[k]=='B')
            {
                p=(11)*pow(16,i);
            }
            else if(a[k]=='C')
            {
                p=(12)*pow(16,i);
            }
            else if(a[k]=='D')
            {
                p=(13)*pow(16,i);
            }
            else if(a[k]=='E')
            {
                p=(14)*pow(16,i);
            }
            else if(a[k]=='F')
            {
                p=(15)*pow(16,i);
            }
            else
            {
                p=(a[k]-48)*pow(16,i);
            }
            k++;
            sum+=p;
        }
        printf("%d\n",sum);
    }
}
