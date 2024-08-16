#include <stdio.h>

int main() {
    int number, i;
    unsigned long long factorial = 1;

    // Asking the user to enter a positive integer
    printf("Enter a positive integer: ");
    scanf("%d", &number);

    // Checking if the input is a positive integer
    if (number < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        // Calculating the factorial
        for (i = 1; i <= number; i++) {
            factorial *= i;
        }
        // Printing the factorial
        printf("Factorial of %d is %llu\n", number, factorial);
    }

    return 0;
}
