#include <stdio.h>

int main(void) {
    int temperature;
    int highest_temp;
    int highest_gpu;

    for (int i = 1; i <= 6; i++) {
        printf("Enter the temperature of GPU%d > ", i);
        scanf("%d", &temperature);

        if (i == 1) {
            highest_temp = temperature;
            highest_gpu = 1;
        } else if (temperature > highest_temp) {
            highest_temp = temperature;
            highest_gpu = i;
        }
    }

    printf("Highest temperature: %d\n", highest_temp);
    printf("GPU number: %d\n", highest_gpu);

    return 0;
}