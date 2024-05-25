#include<stdio.h>
int main(){
    char setpass[10],enterpass[10];
    printf("Set your password: ");
    scanf("%s",&setpass);
    printf("Enter your password: ");
    scanf("%s",&enterpass);
    if(strcmp(setpass,enterpass)==0){
        printf("Password is correct\n");
    }else if(strcmp(setpass,enterpass)!=0){
        printf("try 3 times\n");
         printf("Enter your password: ");
    scanf("%s",&enterpass);
     if(strcmp(setpass,enterpass)==0){
        printf("Password is correct\n");
    }else{
        printf("try 2 times\n");
        printf("Enter your password: ");
        scanf("%s",&enterpass);
        if(strcmp(setpass,enterpass)==0){
        printf("Password is correct\n");
        }else{
            printf("Try 1 more times\n");
            printf("Enter your password: ");
            scanf("%s",&enterpass);

            if(strcmp(setpass,enterpass)==0){
                printf("Password is correct\n");
            }
            else{
                printf("sorry your time is out \n");
            }
          }
        }
      }
   



    return 0;
}