# include <stdio.h>

void reverse_array(int n, int numbers[]);

int main(void) {
    int n;
    
    printf("Enter the amount of integers > ");
    scanf("%d", &n);

    int numbers[n];
    int i;

    for (i = 0; i < n; i++) {
        printf("Enter the number %d > ", i + 1);
        scanf("%d", &numbers[i]);
    }


    reverse_array(n, numbers); 

    printf("Reversed array: ");
    for (int j = 0; j < n; j++) {
        printf("%d ", numbers[j]);
    }

    return 0;
}

void reverse_array(int n, int numbers[]) {
    int start = 0;
    int end = n - 1;

    while (start < end) {
        int temporary = numbers[start];
        numbers[start] = numbers[end];
        numbers[end] = temporary;

        start++;
        end--;
    }
}

