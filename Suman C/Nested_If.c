#include<stdio.h>
int main(){
    int a=15;
    int b=20;
    int c=35;
    int d=45;

    if(a>b && a>c && a>d){
        printf("a is bigger number...");
    }else if(b>a && b>c && a>d){
        printf("b is bigger number...");
    }else if(c>a && c>b && c>d){
        printf("c is bigger number...");
    }else{
        printf("d is bigger number...");
    }

}