# include <stdio.h>

int main(void) {
    int num;

    printf("Enter an integer > ");
    scanf("%d", &num);

    if (num > 0) {
        printf("The number is positive");
    }

    return 0;
}