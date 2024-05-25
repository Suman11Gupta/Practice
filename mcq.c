#include <stdio.h>

int main() {
    int questionNumber;
    
    // Assume the user selects answer 2 (James Gosling) for the first question
    // and answer 3 (JDK) for the second question
    int selectedAnswer;
    
    printf("1. Who invented Java Programming?\n");
    printf("   1. ) Guido van Rossum\n");
    printf("   2. ) James Gosling\n");
    printf("   3. ) Dennis Ritchie\n");
    printf("   4. ) Bjarne Stroustrup\n\n");
    printf("Select Answer: ");
    scanf("%d", &selectedAnswer);
    
    switch(selectedAnswer) {
        case 2:
            printf("Correct Answer!\n\n");
            printf("2. Which component is used to compile, debug and execute the java programs?\n");
            printf("   1. ) JRE\n");
            printf("   2. ) JIT\n");
            printf("   3. ) JDK\n");
            printf("   4. ) JVM\n\n");
            printf("Select Answer: ");
            scanf("%d", &selectedAnswer);
            
            switch(selectedAnswer) {
                case 3:
                    printf("Correct Answer!\n");
                    break;
                default:
                    printf("Wrong Answer! Try Next year.\n");
                    break;
            }
            break;
        default:
            printf("Wrong Answer! Try Next year.\n");
            break;
    }
    
    return 0;
}
