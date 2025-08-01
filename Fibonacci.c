#include <stdio.h>

int main() {
    int terms, i;
    int first = 0, second = 1, next;

    // Ask user for the number of terms
    printf("Enter the number of terms: ");
    scanf("%d", &terms);

    // Handle invalid input
    if (terms <= 0) {
        printf("Please enter a positive number.\n");
        return 1;
    }

    printf("Fibonacci Series up to %d terms:\n", terms);

    for (i = 1; i <= terms; i++) {
        printf("%d ", first);
        next = first + second;
        first = second;
        second = next;
    }

    printf("\n");
    return 0;
}
