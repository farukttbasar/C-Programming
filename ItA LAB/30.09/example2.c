# include <stdio.h>

int main(void) {
    int sayi;

    printf("Bir sayi giriniz > ");
    scanf("%d", &sayi);

    printf("2 ile bolumunden kalan: %d\n", sayi % 2);

    /* 
    if (sayi % 2 == 0) {
        printf("Bu sayi cift!");
    } else {
        printf("Bu sayi tek!");
    }
    */

    return 0;
}