# include <stdio.h>

float calculate_bmi(float weight, float height_m);
void print_bmi_category(float bmi);
void print_ideal_weight_range(float height_m);
void print_health_suggestions(float bmi);

int main(void) {

    float weight;
    float height_cm;
    float height_m;
    float bmi;

    printf("---- BMI CALCULATOR ----\n");

    printf("Enter your weight in kilograms (e.g 75.2) > ");
    scanf("%f", &weight);

    printf("Enter your height in centimeters (e.g 180) > ");
    scanf("%f", &height_cm);

    height_m = height_cm / 100.0f;

    bmi = calculate_bmi(weight, height_m);

    printf("---------------------- RESULTS ----------------------\n");
    
    printf("Your BMI is: %.2f\n", bmi);
    print_bmi_category(bmi);
    print_ideal_weight_range(height_m);
    print_health_suggestions(bmi);

    printf("-----------------------------------------------------\n");
    return 0;
}

float calculate_bmi(float weight, float height_m) {
    return weight / (height_m * height_m);
}

void print_bmi_category(float bmi) {
    printf("Current category: ");
    
    if (bmi <  18.5) {
        printf("Underweight\n");
    } else if (bmi <= 24.9) {
        printf("Normal weight\n");
    } else if (bmi <= 29.9) {
        printf("Overweight\n");
    } else if (bmi <= 34.9) {
        printf("Obesity (Class 1)\n");
    } else if (bmi <= 39.9) {
        printf("Obesity (Class 2)\n");
    } else {
        printf("Severe Obesity\n");
    }
}

void print_ideal_weight_range(float height_m) {
    float min_ideal_weight;
    float max_ideal_weight;

    min_ideal_weight = 18.5f * (height_m * height_m);
    max_ideal_weight = 24.9f * (height_m * height_m);

    printf("Ideal weight range : %.1f kg - %.1f kg\n", min_ideal_weight, max_ideal_weight);
}

void print_health_suggestions(float bmi) {
    printf("Recommendation     : ");

    if (bmi < 18.5f) {
        printf("Focus on high-calorie meals carefully and strength training to build mass safely.\n");
    } else if (bmi <= 24.9f) {
        printf("Excellent! Maintain your current diet and regular physical activity.\n");
    } else if (bmi <= 29.9f) {
        printf("Consider mindful portion control and adding weekly cardio sessions to your routine.\n");
    } else {
        printf("Consulting a healthcare professional or registered dietitian is strongly recommended.\n");
    }
}
