# include <stdio.h>

int main(void) {
    for (int i = 0; i < 11; i++) {
        printf("\n");
        for (int j = 0 ; j < 11; j++) {
            printf("%d * %d = %d\n", i, j, i * j);
        }
    }

}