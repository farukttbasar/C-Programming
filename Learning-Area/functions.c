# include <stdio.h>

int calculate_sum(int x, int y);

int main(void) {
    int result_array[5];

    result_array[0] = calculate_sum(5, 3);
    result_array[1] = calculate_sum(4, 10);
    result_array[2] = calculate_sum(1, 9);
    result_array[3] = calculate_sum(-4, 19);
    result_array[4] = calculate_sum(21, 3);

    for (int i = 0; i < 5; i++) {
        printf("The result is %d\n", result_array[i]);
    }
}

int calculate_sum(int x, int y) {
    return x + y;
}