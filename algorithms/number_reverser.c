// number reverser

# include <stdio.h>

int main(void) {
    int original;
    int reversed = 0;

    printf("Enter a number > ");
    scanf("%d", &original);

    int num = original;

    while (num > 0) {
        reversed = (reversed * 10) + (num % 10);
        num /= 10;
    }

    printf("%d", reversed);

    return 0;
}