# include <stdio.h>

int main(void) {

    const float VAT_RATE = 0.10f;
    const int SHIPPING_FEE = 35;
    const int FREE_SHIPPING_LIMIT = 250;
    
    float subtotal;
    float vatAmount;
    float shippingCost;
    float total;

    printf("Please enter your subtotal > ");
    scanf("%f", &subtotal);

    vatAmount = subtotal * VAT_RATE;

    if (subtotal >= FREE_SHIPPING_LIMIT) {
        shippingCost = 0;
    } else {
        shippingCost = SHIPPING_FEE;
    }

    total = subtotal + shippingCost + vatAmount;

    printf("\n---- ORDER RECEIPT ----\n");
    printf("Subtotal      : %8.2f TL\n", subtotal);
    printf("VAT (10%%)      : %8.2f TL\n", vatAmount);
    printf("Shipping Fee  : %8.2f TL\n", shippingCost);
    printf("-------------------------\n");
    printf("Total         : %8.2f TL", total);

    return 0;
}