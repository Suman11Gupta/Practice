#include<stdio.h>
int main(){
    char setpass[10],enterpass[10];
    printf("Set your password: ");
    scanf("%s",&setpass);
    printf("Enter your password: ");
    scanf("%s",&enterpass);
    if(strcmp(setpass,enterpass)==0){
        printf("Password is correct");
    }
    else if(strcmp(setpass,enterpass)!=0){
    printf(" wrong password ... try 2 more time out of 2\n");
     printf("Enter your password: ");
    scanf("%s",&enterpass);
    if(strcmp(setpass,enterpass)==0){
        printf("Password is correct");      
    }
     else if(strcmp(setpass,enterpass)!=0){
        printf("wrong password ... try 1 more time 1\n");
         printf("Enter your password: ");
    scanf("%s",&enterpass);
     if(strcmp(setpass,enterpass)==0){
        printf("Password is correct");   
    }
    else if(strcmp(setpass,enterpass)!=0){
        printf("wrong password ... try 0 more time 0\n");
         printf("Enter your password: ");
    scanf("%s",&enterpass);
    }
     if(strcmp(setpass,enterpass)==0){
        printf("Password is correct");   
        }
    }
    else
    {
     printf("Password is incorrect");
     }
    }
    return 0;
}