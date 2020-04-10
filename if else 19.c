#include<stdio.h>
int main()
{
    double p,c,b,m,cm,res,t,x;
    scanf("%d",&t);
    while(t--)
    {
        printf("\nEnter marks of Physics,Chemistry,Biology,Math & Computer.\n");
        scanf("%lf %lf %lf %lf %lf",&p,&c,&b,&m,&cm);
        x=(p+c+b+m+cm)/500;
        res=(x*100);
        if(res>=90&&res<=100)
        {
            printf("%.2lf:Grade A",res);
        }
        else if(res>=80&&res<90)
        {
            printf("%.2lf:Grade B",res);
        }
        else if(res>=70&&res<80)
        {
            printf("%.2lf:Grade C",res);
        }
        else if(res>=60&&res<70)
        {
            printf("%.2lf:Grade D",res);
        }
        else if(res>=40&&res<60)
        {
            printf("%.2lf:Grade E",res);
        }
        else if(res<40)
        {
            printf("%.2lf:Grade F",res);
        }
    }
}
