// perfect number checker

# include <stdio.h>

int main(void) {
    int n;
    int sum = 0;

    printf("Enter a number > ");
    scanf("%d", &n);

    for (int i = 1; i <= n / 2; i++) {
        if (n % i == 0) {
            sum += i;
        }
    }

    if (sum == n) {
        printf("Perfect number!");
    } else {
        printf("Not a perfect number!");
    }

    return 0;
}