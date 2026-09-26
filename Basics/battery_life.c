/*
Örnek 22 (Batarya Süresi Hesabı) [cite: 1]
Dosya Adı: battery_life.c (alternatif: remaining_battery.c)

İngilizce Değişken Adları:

remainingBattery (Kalan batarya yüzdesi) [cite: 1]

hourlyConsumption (Saatlik ortalama batarya tüketimi) [cite: 1]

estimatedUsage (Tahmini kalan kullanım süresi) [cite: 1]
batarya / hourly = estimated
*/
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