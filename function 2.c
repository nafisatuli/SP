#include<stdio.h>
double fnc1(double res1);
double fnc2(double res2);
double fnc3(double res3);
int main()
{
    double a,res1,res2,res3;
    scanf("%lf",&a);
    res1=fnc1(a);
    res2=fnc2(a);
    res3=fnc3(a);
    printf("Diameter:%.3lf\nCircumference:%.3lf\nArea:%.3lf\n",res1,res2,res3);
}
double fnc1(double a)
{
    return (2*a);
}
double fnc2 (double a)
{
    return (2*3.1416*a);
}
double fnc3 (double a)
{
    return (3.1416*a*a);
}

