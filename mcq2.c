#include<stdio.h>
int main(){
    int selectedanswer;
    printf("Who invented java programming?\n");
    printf(" 1. ) Guido van Rossum\n");
    printf(" 2. ) James Gosling\n");
    printf(" 3. ) Dennis Ritchie\n");
    printf(" 4. ) Bjarne Stroustrup\n");
    printf("select answer:\n");
    scanf("%d",&selectedanswer);
    switch(selectedanswer){
        case 2: 
        printf("Correct Answer\n");
        printf("2. Which component is used to compile, debug and execute the java programs?\n");
        printf("1. ) JRE\n");
        printf("2. ) JIT\n");
        printf("3. ) JDK\n");
        printf("4. ) JVM\n");
        printf("select answer:\n");
        scanf("%d",&selectedanswer);
        switch(selectedanswer){
            case 3:
            printf("Correct answer\n");
            break;
            default:
            printf("Wrong answer try next year...\n");
            break;
        }
        break;
        default:
            printf("Wrong answer try next year...\n");
            break;


    }
}