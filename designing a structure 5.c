#include<stdio.h>
struct DOB
{
    int day;
    int month;
    int year;
};
struct account
{
    char name[100];
    int acc_nm;
    double balance;
    struct DOB date;
};
int main()
{
    struct account info[100];
    {
        int i;
        for(i=0; i<2; i++)
        {
            scanf("%s %d %lf %d %d %d",&info[i].name,&info[i].acc_nm,&info[i].balance,&info[i].date.day,&info[i].date.month,&info[i].date.year);
        }
        for(i=1; i>=0; i--)
        {
            printf("%s\n %d\n %lf\n %d\n %d\n %d\n",info[i].name,info[i].acc_nm,info[i].balance,info[i].date.day,info[i].date.month,info[i].date.year);
        }
    };
}
