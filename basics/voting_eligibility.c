# include <stdio.h>
# include <stdbool.h>

int main(void) {

    int citizenInput;
    int age;

    printf("Are you a citizen? (Yes - 1 // No - 0) > ");
    scanf("%d", &citizenInput);

    bool isCitizen = (citizenInput == 1);

    printf("How old are you? > ");
    scanf("%d", &age);

    if (age >= 18) {
        if (isCitizen) {
            printf("You are old enough to vote and a citizen. Thus, you are a voter!");
        } else {
            printf("You are old enough to vote but you are not a citizen. You are not a voter!");
        }
    } else {
        printf("You are not old enough to vote.");
    }

    return 0;
}