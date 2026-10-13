# include <stdio.h>

int main(void) {
    int num;

    printf("Enter a number > ");
    scanf("%d", &num);

    if (num == 0) {
        printf("ZERO");
    } else if (num > 0) {
        if (num % 2 == 0) {
            printf("Positive and even");
        } else {
            printf("Positive and odd");
        }
    } else if (num < 0) {
        if (num % 2 == 0) {
            printf("Negative and even");
        } else {
            printf("Negative and odd");
        }
    }
    return 0;
}