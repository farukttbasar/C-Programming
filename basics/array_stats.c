# include <stdio.h>
# define SIZE 10

int main(void) {
    int array[SIZE];


    printf("Enter 10 integers seperated by space > ");
    for (int i = 0; i < SIZE; i++) {
        scanf("%d", &array[i]);
    }

    int sum = array[0];
    int max = array[0];

    for (int i = 1; i < SIZE; i++) {
        sum += array[i];

        if (array[i] > max) {
            max = array[i];
        }
    }
    float arithmetic_mean = (float)sum / SIZE;

    printf("The biggest number: %d\n", max);
    printf("The arithmetic mean: %.2f", arithmetic_mean);

    return 0;
}