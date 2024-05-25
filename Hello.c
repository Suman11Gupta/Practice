#include<stdio.h>
int main()
{
    float a,b;
    float sum;

    printf("enter a:");
    scanf("%f",&a);
    printf("enter b:");
    scanf("%f",&b);

    sum=a+b;
    printf("sum=%.2f\n",sum);
    printf("%.2f+%.2f=%.2f",a,b,sum);
    
}