# include <stdio.h>
# include <string.h>

int main(void) {
    char first[] = "HELLO";
    char second[] = {'H', 'E', 'L', 'L', 'O', '\0'};
    char third[10] = "HELLO";

    // Display all three strings
    printf("%s\n", first);
    printf("%s\n", second);
    printf("%s\n", third);

    // Display their lengths using strlen()
    printf("%d\n", strlen(first));
    printf("%d\n", strlen(second));
    printf("%d\n", strlen(third));

    // Display their length using sizeof()
    printf("%d\n", sizeof(first));
    printf("%d\n", sizeof(second));
    printf("%d\n", sizeof(third));


    return 0;

    /* The reason why there are two different results is that strlen() counts the visible characters and '\n' 
    while sizeof() considers all the characters (visible, null terminator, new line) */
    
}