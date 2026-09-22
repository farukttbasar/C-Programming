# include <stdio.h>

int main(void) {

    const float VAT_RATE = 0.10f;
    const int SHIPPING_FEE = 35;
    const int FREE_SHIPPING_LIMIT = 250;
    
    float subtotal;
    float vat_amount;
    float shipping_cost;
    float total;

    printf("Please enter your subtotal > ");
    scanf("%f", &subtotal);

    vat_amount = subtotal * VAT_RATE;

    if (subtotal >= FREE_SHIPPING_LIMIT) {
        shipping_cost = 0;
    } else {
        shipping_cost = SHIPPING_FEE;
    }

    total = subtotal + shipping_cost + vat_amount;

    printf("\n---- ORDER RECEIPT ----\n");
    printf("Subtotal      : %8.2f TL\n", subtotal);
    printf("VAT (10%%)      : %8.2f TL\n", vat_amount);
    printf("Shipping Fee  : %8.2f TL\n", shipping_cost);
    printf("-------------------------\n");
    printf("Total         : %8.2f TL", total);

    return 0;
}