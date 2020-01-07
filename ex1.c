#include<stdio.h>
int main()
{
    double a,b,c;
    printf("please input two numbers:");
    scanf("%lf %lf",&a,&b);
    c=(a+b)*(a+b);
    printf("result:");
    printf("%1.2f\n",c);
}