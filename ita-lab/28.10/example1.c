# include <stdio.h>

int is_even(int num);

int main(void) {
    int num;

    printf("Enter a number > ");
    scanf("%d", &num);

    if (is_even(num)) {
        puts("EVEN");
    } else {
        puts("ODD");
    }

    return 0;
}

int is_even(int num) {
    if (num % 2 == 0) {
        return 1;
    } 

    return 0;
}