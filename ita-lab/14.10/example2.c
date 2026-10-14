# include <stdio.h>

int main(void) {
    int n;
    int is_prime = 1;

    printf("Enter a positive integer > ");
    scanf("%d", &n);

    if (n <= 1) {
        is_prime = 0;
    } else {
        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                is_prime = 0;
                break;
            }
        }
    }

    if (is_prime) {
        printf("Prime number!");
    } else {
        printf("Not a prime number!");
    }

    return 0;
}