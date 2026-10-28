# include <stdio.h>
# define NUMBER 10

int find_max(int numbers[]);
int find_min(int numbers[]);

int main(void) {
    int numbers[NUMBER];
    int i;

    for (i = 0; i < NUMBER; i++) {
        printf("Enter the number %d > ", i + 1);
        scanf("%d", &numbers[i]);
    }

    printf("The maximum: %d\n", find_max(numbers));
    printf("The minimum: %d", find_min(numbers));
    

    return 0;
}

int find_max(int numbers[]) {
    int max = numbers[0];
    int i;

    for (i = 0; i < NUMBER; i++) {
        if (numbers[i] > max) {
            max = numbers[i];
        }
    }

    return max;
}

int find_min(int numbers[]) {
    int min = numbers[0];
    int i;

    for (i = 0; i < NUMBER; i++) {
        if (numbers[i] < min) {
            min = numbers[i];
        }
    }

    return min;
    
}
