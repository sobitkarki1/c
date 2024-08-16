#include <stdio.h>

int main() {
    int number, sum = 0, digit;

    // Asking the user to enter a number
    printf("Enter an integer: ");
    scanf("%d", &number);

    // Handling negative numbers
    if (number < 0) {
        number = -number;  // Make the number positive for simplicity
    }

    // Calculating the sum of digits
    while (number != 0) {
        digit = number % 10;  // Extract the last digit
        sum += digit;        // Add it to the sum
        number /= 10;        // Remove the last digit
    }

    // Printing the sum of digits
    printf("The sum of the digits is: %d\n", sum);

    return 0;
}
