# include <stdio.h>
# include <string.h>

int main(void) {
    // Initialize the array
    char word[] = {'C', 'O', 'M', 'P', 'U', 'T', 'E', 'R', '\0'};

    // Display the complete string
    printf("%s\n", word);

    // Display each character separately with their index
    int i;
    for (i = 0; i < strlen(word); i++) {
        printf("Character: %c - Index: %d\n", word[i], i);
    }

    return 0;
}