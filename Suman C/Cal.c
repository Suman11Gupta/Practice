#include<stdio.h>
int main(){
    double num1,num2;
    char ope;
    printf("Enter Number1: ");
    scanf("%lf",&num1);
    printf("Enter Number2: ");
    scanf("%lf",&num2);

    printf("Enter Operaters: ");
    scanf("%s",&ope);
    printf("Your Result is:  ");
   

    switch(ope){
        case '*':
        printf("%.2lf*%.2lf=%.2lf",num1,num2,num1*num2);
        break;

        
        default:
        printf("Sorry...");
    }


}