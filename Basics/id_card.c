# include <stdio.h>

int main(void) {

    char name[20];
    char surname[20];
    int age;

    printf("What is your name? > ");
    scanf("%19s", name);

    printf("What is your surname? > ");
    scanf("%19s", surname);

    printf("How old are you? > ");
    scanf("%d", &age);

    printf("\n"
           "---- YOUR DIGITAL ID CARD ----\n"
           "                            \n"
           "  NAME    : %s              \n"
           "  SURNAME : %s              \n"
           "  AGE     : %d              \n"
           "                            \n"
           "------------------------------\n",
           name, surname, age);
    
    return 0;
}