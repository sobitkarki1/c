#include <stdio.h>

int main() {
    int terms, i;
    unsigned long long a = 0, b = 1, next;

    // Asking the user to enter the number of terms
    printf("Enter the number of terms: ");
    scanf("%d", &terms);

    // Checking if the number of terms is valid
    if (terms <= 0) {
        printf("Please enter a positive integer.\n");
    } else if (terms == 1) {
        printf("Fibonacci sequence up to %d term: %llu\n", terms, a);
    } else {
        printf("Fibonacci sequence up to %d terms: %llu, %llu", terms, a, b);
        for (i = 3; i <= terms; i++) {
            next = a + b;
            printf(", %llu", next);
            a = b;
            b = next;
        }
        printf("\n");
    }

    return 0;
}
