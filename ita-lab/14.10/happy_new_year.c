# include <stdio.h>

int main(void) {
    int countdown = 3;

    while (countdown > 0) {
        printf("%d\n", countdown);
        countdown--;
    }

    printf("Happy New Year!");

    return 0;
}