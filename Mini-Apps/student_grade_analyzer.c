# include <stdio.h>

float calculate_average(int student_count, float grades[]) {
    float sum = 0;

    for (int i = 0; i < student_count; i++){
        sum += grades[i];
    }
    
    return sum / student_count;
}

float find_highest(int student_count, float grades[]) {
    float highest = grades[0];

    for (int i = 0; i < student_count; i++) {
        if (grades[i] > highest) {
            highest = grades[i];
        }
    }
    return highest;
}

float find_lowest(int student_count, float grades[]) {
    float lowest = grades[0];

    for (int i = 0; i < student_count; i++) {
        if (grades[i] < lowest) {
            lowest = grades[i];
        }
    }
    return lowest;
}

int count_passed(int student_count, float grades[]) {
    int passed = 0;

    for (int i = 0; i < student_count; i++) {
        if (grades[i] >= 50) {
            passed++;
        }
    }
    return passed;
}

int count_failed(int student_count, float grades[]) {
    int failed = 0;

    for (int i = 0; i < student_count; i++) {
        if (grades[i] < 50) {
            failed++;
        }
    }
    return failed;
}

int main() {
    int student_count;

    while (1) {
        printf("How many students? > ");

        if (scanf("%d", &student_count) == 1 && student_count >= 1 && student_count <= 50) {
            break;
        }

        while (getchar() != '\n');

        printf("Please enter a number between 1-50 (inclusive) > ");
    }

    float grades[student_count];

    for (int i = 0; i < student_count; i++) {
        while (1) {
            printf("Enter the grade for student %d > ", i + 1);

            if (scanf("%f", &grades[i]) == 1 && grades[i] >= 0 && grades[i] <= 100) {
                break;
            }

            while (getchar() != '\n');

            printf("Enter a grade between 0-100 (inclusive) > ");
        }
    }

    printf("\n======== GRADE ANALYSIS ========\n");
    printf("Students   : %d\n", student_count);
    printf("Average    : %.2f\n", calculate_average(student_count, grades));
    printf("Highest    : %.2f\n", find_highest(student_count, grades));
    printf("Lowest     : %.2f\n", find_lowest(student_count, grades));
    printf("Passed     : %d\n", count_passed(student_count, grades));
    printf("Failed     : %d\n", count_failed(student_count, grades));
    printf("=================================");

    return 0;
}
