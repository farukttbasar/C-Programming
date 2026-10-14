# include <stdio.h>

int main(void) {
    int x;
    int y;

    printf("Enter the value of x > ");
    scanf("%d", &x);

    printf("Enter the value of y > ");
    scanf("%d", &y);

    x = x + y;
    y = x - y;
    x = x - y;
    
    printf("X: %d\n", x);
    printf("Y: %d\n", y);
    
}