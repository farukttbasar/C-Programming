# include <stdio.h>

int main(void) {
    int pi = 3;
    float yaricap, hacim;

    printf("Yaricapi giriniz > ");
    scanf("%f", &yaricap);

    hacim = (4.0f / 3.0f) * pi * yaricap * yaricap * yaricap;

    printf("\nKurenin hacmi: %.2f", hacim);

    return 0;

}