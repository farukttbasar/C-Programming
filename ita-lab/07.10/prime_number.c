# include <stdio.h>
# include <math.h>

int main(void) {
    int num;
    int prime = 1;

    printf("Enter the number > ");
    scanf("%d", &num);

    for (int i = 2; i < num; i++) {
        if (num % i == 0) {
            prime = 0;
        }
    }
    if (prime) {
        printf("Prime");
    } else {
        printf("Not prime");
    }
    return 0;
}