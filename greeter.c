# include <stdio.h>

int main(void) {

    char name[30];

    printf("What is your name? > ");
    scanf("%29s", name);

    printf("Welcome, %s!", name);

    return 0;

}