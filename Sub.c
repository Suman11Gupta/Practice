#include<stdio.h>
int main(){
 
    int a,b;
    int add,sub,mul,div;
    printf("Enter First No.:");
    scanf("%d",&a);
    printf("Enter Second No.:");
    scanf("%d",&b);
     
     add=a+b;
     printf("Add=",add);
     printf("%d+%d=%d\n",a,b,add);
     
     sub=a-b;
     printf("Sub=",sub);
     printf("%d-%d=%d\n",a,b,sub);

     mul=a*b;
     printf("Mul=",mul);
     printf("%d*%d=%d\n",a,b,mul);

     div=a/b;
     printf("Div=",div);
     printf("%d/%d=%d\n",a,b,div);

    float s=10;
    float u=20;
    float m;
    m=s+u;
    printf("Add=",m);
    printf(" Your First Number %.2f + Your Second Number %.2f = Total %.2f",s,u,m);

}