# include <stdio.h>
# define NUMBER 10

int calculate_sum(int numbers[]);
int calculate_average(int numbers[]);

int main(void) {
    int numbers[NUMBER];
    int i;

    for (i = 0; i < NUMBER; i++) {
        printf("Enter the number %d > ", i + 1);
        scanf("%d", &numbers[i]);
    }

    printf("The total: %d\n", calculate_sum(numbers));
    printf("The average: %d", calculate_average(numbers));

    return 0;
}

int calculate_sum(int numbers[]) {
    int sum = 0;
    int i;

    for (i = 0; i < NUMBER; i++) {
        sum += numbers[i];
    }

    return sum;
}

int calculate_average(int numbers[]) {
    return calculate_sum(numbers) / NUMBER;
}
