#include<stdio.h>
struct account
{
    int acc_nm;
    char acc_hldr [100];
    double balance;
};
int main()
{
struct account member;
{
   scanf("%d %s %lf",&member.acc_nm,member.acc_hldr,&member.balance);
    printf("%d\n%s\n%.2lf",member.acc_nm,member.acc_hldr,member.balance);
};
}
