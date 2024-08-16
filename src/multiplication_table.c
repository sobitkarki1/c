#include <stdio.h>

int main() {
    int number, i;

    // Asking the user to enter a number
    printf("Enter a number to print its multiplication table: ");
    scanf("%d", &number);

    // Printing the multiplication table
    printf("Multiplication table for %d:\n", number);
    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", number, i, number * i);
    }

    return 0;
}
