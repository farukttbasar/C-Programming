# include <stdio.h>
# include <string.h>

int main(void) {
    // Declare three arrays
    char first[25];
    char second[25];
    char third[25];
    char full[50] = "";

    // Read both strings
    scanf("%s", first);
    scanf("%s", second);

    // Append the last name using strcat()
    strcat(full, first);
    strcat(full, " ");
    strcat(full, second);

    // Display the full name
    printf("Full name: %s\n", full);

    // Copy the first name to third array
    strcpy(third, first);

    // Display the copied array
    printf("Copied: %s", third);

    return 0;    
}