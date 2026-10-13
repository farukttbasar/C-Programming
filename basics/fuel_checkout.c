# include <stdio.h>

int main(void) {

    float pricePerLiter;
    int fuelQuantity;
    float total;

    printf("Please enter the price per litre of fuel > ");
    scanf("%f", &pricePerLiter);
    
    printf("Please enter the amount of fuel to purchase > ");
    scanf("%d", &fuelQuantity);

    total = fuelQuantity * pricePerLiter;

    printf("Total amountto pay: %.2f\n", total);

    return 0;
}