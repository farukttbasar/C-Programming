# include <stdio.h>

int main(void) {
    int original_num;
    int num;
    int sum = 0;

    printf("Enter a number > ");
    scanf("%d", &original_num);

    num = original_num;

    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }

    if (original_num % sum == 0) {
        printf("Harshad Number!");
    } else {
        printf("Not a Harshad Number!");
    }

    return 0;
}