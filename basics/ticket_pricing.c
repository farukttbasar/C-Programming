# include <stdio.h>
# define DEFAULT_PRICE 100

int main(void) {
    int age;
    float finalPrice = DEFAULT_PRICE;

    printf("Please enter your age > ");
    scanf("%d", &age);

    if (age < 12 || age > 65) {
        finalPrice = DEFAULT_PRICE * 0.5f;
    }

    printf("Your ticket costs: %.2f TL\n", finalPrice);

    return 0;
}