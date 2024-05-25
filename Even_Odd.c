#include<stdio.h>
int main(){
    int a;
    printf("Enter Your Number:");
    scanf("%d",&a);
    if(a%2==0){
        printf("Your Number %d is Even...",a);
    }else{
         printf("Your Number %d is Odd...",a);
    }
}