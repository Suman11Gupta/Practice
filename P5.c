#include<stdio.h>
int main(){
    int a;
    printf("Enter Number:");
    scanf("%d",&a);
    if(a>=80){
        printf("Pass");
    }else{
        printf("Fail");
    }
}