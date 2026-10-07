# include <stdio.h>

int main(void) {
    float grade;

    printf("Enter the student's exam grade > ");
    scanf("%f", &grade);

    if (grade >= 50) {
        printf("PASS\n");
    } else {
        printf("FAIL");
    }
    return 0;
}