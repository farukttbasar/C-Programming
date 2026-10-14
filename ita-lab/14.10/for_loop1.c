# include <stdio.h>

int main(void) {
    int sum = 0;

    for (int i = 0; i < 6; i++) {
        sum += i;
    }

    printf("Sum is %d", sum);

    return 0;
}