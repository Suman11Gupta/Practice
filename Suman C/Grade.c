#include<stdio.h>
int main(){
    int a;
    printf("Enter Number: ");
    scanf("%d",&a);

    if(a>80 && a<=100){
        printf("Grade A");
        }else if(a>60 && a<=80){
         printf("Grade B");
        }else if(a>40 && a<=60){
         printf("Grade C");
        }else if(a>30 && a<=40){
         printf("Grade D");
        }else{
        printf("Grade F");
    }
}