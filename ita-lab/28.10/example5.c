# include <stdio.h>
# define NUMBER 15

int count_positive(int numbers[]);

int main(void) {
    int numbers[NUMBER];
    int i;

    for (i = 0; i < NUMBER; i++) {
        printf("Enter the number %d > ", i + 1);
        scanf("%d", &numbers[i]);
    }

    printf("There are %d positive numbers in that array", count_positive(numbers));

    return 0;
}

int count_positive(int numbers[]) {
    int counter = 0;
    int i;

    for (i = 0; i < NUMBER; i++) {
        if (numbers[i] > 0) {
            counter++;
        }
    }

    return counter;
}
