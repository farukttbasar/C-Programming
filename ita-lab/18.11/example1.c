# include <stdio.h>

int main(void) {
    int arr[11] = {62, 72, 87, 98, 45, 78, 14, 56, 88, 95, 74};

    int i;
    for (i = 0; i < 11; i++) {
        printf("GPU %d: %d C\n", i + 1, arr[i]);
    }

    return 0;
}
