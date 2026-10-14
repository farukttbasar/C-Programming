# include <stdio.h>

int main(void) {
    for (int i = 1; i <= 2; i++) {
        printf("Outer: %d\n", i);

        for (int j = 1; j <= 4; j++) {
            printf("\tInner: %d\n", j);
        }
    }

    return 0;
}