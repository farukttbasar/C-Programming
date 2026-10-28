# include <stdio.h>

int find_largest(int num1, int num2);

int main(void) {
    int num1;
    int num2;
    int max;
    

    printf("Enter two numbers > ");
    scanf("%d %d", &num1, &num2);

    max = find_largest(num1, num2);

    printf("The largest number is: %d", max);



    return 0;
}

int find_largest(int num1, int num2) {
    int max = num1;

    if (num2 > num1) {
        return num2;
    }

    return num1;
}