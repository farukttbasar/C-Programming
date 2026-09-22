# include <stdio.h>
# define DEFAULT_PRICE 100

int main(void) {
    int age;
    float final_price = DEFAULT_PRICE;

    printf("Please enter your age > ");
    scanf("%d", &age);

    if (age < 12 || age > 65) {
        final_price = DEFAULT_PRICE * 0.5f;
    }

    printf("Your ticket costs: %.2f TL\n", final_price);

    return 0;
}