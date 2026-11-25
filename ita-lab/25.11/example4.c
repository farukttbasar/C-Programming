# include <stdio.h>
# include <string.h>

int main(void) {
    // Declare a character array of size 30
    char name[30];
    char copied[30];

    // Read the name
    scanf("%s", name);

    // Display the entered name
    printf("Original: %s\n", name);

    // Copy the name array to another array
    strcpy(copied, name);

    // Display the copied name
    printf("Copied: %s\n", copied);

    return 0;    
}