# include <stdio.h>

int main(void) {
    int age;
    float grade;

    printf("Enter the student's exam grade > ");
    scanf("%f", &grade);

    printf("Enter the student's age > ");
    scanf("%d", &age);

    if (grade > 60) {
        if (age >= 18) {
            printf("Admission approved.");
        } else {
            printf("Your grade is above 60 but your age below 18");
        }
    } else {
        printf("Your exam grade below 60");
    }
    return 0;

}
