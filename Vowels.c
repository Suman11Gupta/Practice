#include<stdio.h>
int main(){
    char a,b;
    
    printf("Enter Alphabet:");
    scanf("%c",&a);
    if(a=='A' || a=='E' || a=='I' || a=='O' || a=='U' ){
        printf("%c is Vowel...",a);
    }else{
        printf("%c is Constent...",a);
    }
   
}