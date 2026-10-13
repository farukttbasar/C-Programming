# include <stdio.h>

int main(void) {

    float burgerPrice;
    int burgerQuantity;
    float total;

    printf("Burger price > ");
    scanf("%f", &burgerPrice);

    printf("Order quantity > ");
    scanf("%d", &burgerQuantity);

    total = burgerPrice * burgerQuantity;

    printf("Total amount: %.2f\n", total);

    return 0;
}