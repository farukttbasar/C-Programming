# include <stdio.h>

int main(void) {
    int n, sum = 0;

    printf("Enter a number > ");
    scanf("%d", &n);

    for (int i = 0; i <= n; i++) {
        if (i % 2 == 0) {
            sum += i;
        }
    }

    /*
    for (int i = 2; i <= n; i+=2) {
        sum += i
    }
    */

    printf("Sum of even numbers between 1 - %d: %d", n, sum);

    return 0;
}