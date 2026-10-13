# include <stdio.h>

int main(void) {

    int num1;
    int num2;
    int num3;

    printf("Please enter your first number > ");
    scanf("%d", &num1);

    printf("\nPlease enter your second number > ");
    scanf("%d", &num2);

    printf("\nPlease enter your third number > ");
    scanf("%d", &num3);

    int biggest = num1;

    if (num2 > biggest) {
        biggest = num2;
    }

    if (num3 > biggest) {
        biggest = num3;
    }
    
    printf("Biggest number is: %d", biggest);

    return 0;
}