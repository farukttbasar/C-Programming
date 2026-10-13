# include <stdio.h>

int main(void) {
    float yarıcap;
    float alan, cevre;
    int pi = 3;

    printf("Yaricap giriniz > ");
    scanf("%f", &yarıcap);

    alan = pi * yarıcap * yarıcap;
    cevre = 2 * pi * yarıcap;

    printf("Dairenin Alani  : %.2f", alan);
    printf("\nDairenin Cevresi : %.2f", cevre);

    return 0;
}