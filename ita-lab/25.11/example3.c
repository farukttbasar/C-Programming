# include <stdio.h>
# include <string.h>

int main(void) {
    // Declare a character array of size 30
    char name[30];

    // Read the name
    fgets(name, sizeof(name), stdin);

    /* 
    // Read the name
    scanf("%s", name);
    */
    // Display the entered name
    printf("%s\n", name);

    // Display the number of characters using strlen()
    printf("%d", strlen(name));

    return 0;    
}