#include <stdio.h>

int main() {
    int number;

    // Asking the user to enter an integer
    printf("Enter an integer: ");
    scanf("%d", &number);

    // Checking if the number is even or odd
    if (number % 2 == 0) {
        printf("%d is even.\n", number);
    } else {
        printf("%d is odd.\n", number);
    }

    return 0;
}
