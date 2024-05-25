#include<stdio.h>
int main(){
    int a,b,c,d;

    printf("Enter Number A: ");
    scanf("%d",&a);
    printf("Enter Number B: ");
    scanf("%d",&b);
     printf("Enter Number c: ");
    scanf("%d",&c);
     printf("Enter Number D: ");
    scanf("%d",&d);

    if(a<b && a<c && a<d){
        printf("Number A Is Smallest");
    }else if(b<a && b<c && b<d){
    printf("Number B Is Smallest");
    }else if(c<a && c<b && c<d){
    printf("Number C Is Smallest");
    }else{
    printf("Number D Is Smallest");
    }
}