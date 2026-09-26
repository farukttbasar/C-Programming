# include <stdio.h>

int main(void) {

    float distance;
    float averageSpeed;
    float estimatedTime;

    printf("Distance (km) > ");
    scanf("%f", &distance);

    printf("Average speed (km/h) > ");
    scanf("%f", &averageSpeed);

    estimatedTime = distance / averageSpeed;

    printf("Estimated time (h) : %.2f", estimatedTime);

    return 0;
}

