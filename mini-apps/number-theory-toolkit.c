# include <stdio.h>

int main(void) {
    int choice;
    int n;
    int i;

    while (1) {
        printf("=== Number Theory Toolkit ===\n");
        printf("1. Prime classification\n");
        printf("2. Perfect number check\n");
        printf("3. Palindrome check\n");
        printf("4. Collatz sequence\n");
        printf("0. Exit\n");

        printf("Choice: ");
        if (scanf("%d", &choice) != 1) {
            break;
        }

        if (choice == 0) {
            printf("Goodbye!\n");
            break;
        }

        printf("Enter a number (1-100000): ");
        if (scanf("%d", &n) != 1) {
            break;
        }

        if (choice == 1) {
            if (n == 1) {
                printf("Prime: NEITHER\n");
            } else {
                int is_prime = 1;

                for (i = 2; i * i <= n; i++) {
                    if (n % i ==0) {
                        is_prime = 0;
                        break;
                    }
                }

                if (is_prime) {
                    printf("Prime: PRIME\n");
                } else {
                    printf("Prime: COMPOSITE\n");
                }
            }

        } else if (choice == 2) {
            int sum = 0;

            for (i = 1; i <= (n / 2); i++) {
                if (n % i == 0) {
                    sum += i;
                }
            }
            
            if (sum == n) {
                printf("Perfect: PERFECT\n");
            } else {
                printf("Perfect: NOT PERFECT\n");
            }
    
        } else if (choice == 3) {
            int reversed = 0;
            int temporary = n;

            while (temporary > 0) {
                reversed = (reversed * 10) + (temporary % 10);
                temporary /= 10;
            }

            if (reversed == n) {
                printf("Palindrome: PALINDROME\n");
            } else {
                printf("Palindrome: NOT PALINDROME\n");
            }

        } else if (choice == 4) {
            int new_num = n;

            printf("Collatz: %d", n);

            while (new_num != 1) {
                if (new_num % 2 == 0) {
                    new_num /= 2;
                } else {
                    new_num = (new_num * 3) + 1;
                }

                printf(" %d", new_num);
            }
            printf("\n");
        }
    }

    return 0;
}