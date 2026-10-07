# include <stdio.h>

int main(void) {
    int choice;
    float num1;
    float num2;
    float result;

    printf("Enter the first number\n > ");
    scanf("%f", &num1);

    printf("Enter the second number\n > ");
    scanf("%f", &num2);

    printf("----------------\n");
    printf("1 - ADDITION\n");
    printf("2 - SUBSTRACTION\n");
    printf("3 - MULTIPLICATION\n");
    printf("4 - DIVISION\n");
    printf("Choose an operation\n > ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            result = num1 + num2;
            printf("Result: %.2f\n", result);
            break;

        case 2:
            result = num1 - num2;
            printf("Result: %.2f\n", result);
            break;

        case 3:
            result = num1 * num2;
            printf("Result: %.2f\n", result);
            break;

        case 4:
            if (num2 == 0 ) {
                printf("This operation cannot be done!\n");
            } else {
                result = num1 / num2;
                printf("Result: %.2f\n", result);
            }
            break;

        default:
            printf("Invalid choice!\n");
            break;
    }
    
    return 0;
}