# include <stdio.h>

int main(void) {

    float remainingBattery;
    float hourlyConsumption;
    float estimatedUsage;

    printf("Remaining battery > %%");
    scanf("%f", &remainingBattery);

    printf("Hourly consumption > %%");
    scanf("%f", &hourlyConsumption);

    estimatedUsage = remainingBattery / hourlyConsumption;

    printf("Estimated usage: %.2f hours", estimatedUsage);

    return 0;
}