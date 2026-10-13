// collatz sequence generator

# include <stdio.h>

int main(void) {
    int n;

    printf("Enter a number (1-100000) > ");
    scanf("%d", &n);

    int current = n;

    printf("Collatz: %d", n);

    while (current != 1) {
        if (current % 2 == 0) {
            current /= 2;
        } else {
            current = (current * 3) + 1;
        }

        printf(" %d", current);
    }

    return 0;
}