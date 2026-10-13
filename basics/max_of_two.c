# include <stdio.h>

int main(void) {

    int num1;
    int num2;

    printf("Please enter the first number > ");
    scanf("%d", &num1);

    printf("Please enter the second number > ");
    scanf("%d", &num2);

    if (num1 > num2) {
        printf("The greatest number is: %d", num1);
    } else if (num2 > num1) {
        printf("The greatest number is: %d", num2);
    } else {
        printf("Both numbers are equal. (%d)", num1);
    }

    return 0;
}