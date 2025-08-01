#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[100], cleaned[100];
    int i, j = 0, isPalindrome = 1;

    // Get input from the user
    printf("Enter a word or phrase: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character if present
    size_t len = strlen(str);
    if (str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }

    // Remove spaces and punctuation, convert to lowercase
    for (i = 0; str[i] != '\0'; i++) {
        if (isalnum(str[i])) {
            cleaned[j++] = tolower(str[i]);
        }
    }
    cleaned[j] = '\0'; // Null-terminate the cleaned string

    // Check if cleaned string is a palindrome
    int start = 0;
    int end = j - 1;
    while (start < end) {
        if (cleaned[start] != cleaned[end]) {
            isPalindrome = 0;
            break;
        }
        start++;
        end--;
    }

    // Output result
    if (isPalindrome) {
        printf("It is a palindrome!\n");
    } else {
        printf("It is not a palindrome.\n");
    }

    return 0;
}
