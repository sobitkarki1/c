#include <stdio.h>

int main() {
    int num1, num2, sum;

    // Asking the user to enter two integers
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    // Calculating the sum
    sum = num1 + num2;

    // Printing the sum
    printf("The sum of %d and %d is: %d\n", num1, num2, sum);

    return 0;
}
