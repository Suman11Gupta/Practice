#include<stdio.h>
int main() {
    char password[] = "p4n@in";
    char input[20];
    int attempts = 3;

    printf("Set your password: ");
    scanf("%s", password);

    while (attempts > 0) {
        printf("Enter your Password: ");
        scanf("%s", input);

        if (strcmp(password, input) == 0) {
            printf("Access granted!\n");
            break;
        } else {
            attempts--;
            if (attempts > 0) {
                printf("Wrong password... Try %d more time%s.\n", attempts, attempts > 1 ? "s" : "");
            } else {
                printf("Wrong password... No more attempts left.\n");
            }
        }
    }

    return 0;
}
