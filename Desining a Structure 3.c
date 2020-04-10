#include<stdio.h>
struct DOB
{
   int day;
   int month;
   int year;
};
struct account
{
    int acc_nm;
    char acc_hldr [100];
    double balance;
    struct DOB date;
};
int main()
{
struct account member;
{
   scanf("%d %s %lf %d %d %d",&member.acc_nm,member.acc_hldr,&member.balance,&member.date.day,&member.date.month,&member.date.year);
    printf("%d\n%s\n%.2lf\n%d\n%d\n%d",member.acc_nm,member.acc_hldr,member.balance,member.date.day,member.date.month,member.date.year);
};
}
