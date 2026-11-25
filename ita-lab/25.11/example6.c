# include <stdio.h>
# include <string.h>

int is_palindrome(char arr[20]);

int main(void) {
    char word[20];

    scanf("%s", word);

    if (is_palindrome(word)) {
        puts("Palindrome");
    } else {
        puts("Not Palindrome");
    }

}

int is_palindrome(char arr[20]) {
    int is_palindrome = 1;
    int length = 0;
    int i = 0;

    while (arr[i] != '\0') {
        length++;
        i++;
    }

    int start = 0;
    int end = length - 1;

    while (end > start) {
        if (arr[start] != arr[end]) {
            is_palindrome = 0;
            break;
        }
        start++;
        end--;
    }

    return is_palindrome;

}