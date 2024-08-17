#include <stdio.h>
#include <math.h>

void printMenu() {
    printf("\nSimple Calculator\n");
    printf("Choose an operation:\n");
    printf("1. Addition (+)\n");
    printf("2. Subtraction (-)\n");
    printf("3. Multiplication (*)\n");
    printf("4. Division (/)\n");
    printf("5. Exponentiation (^)\n");
    printf("6. Exit\n");
}

int main() {
    int choice;
    double num1, num2, result;

    while (1) {
        printMenu();
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 6) {
            printf("Exiting...\n");
            break;
        }

        if (choice < 1 || choice > 6) {
            printf("Invalid choice. Please choose a valid operation.\n");
            continue;
        }

        // Asking the user to enter two numbers for the operation
        printf("Enter two numbers: ");
        scanf("%lf %lf", &num1, &num2);

        switch (choice) {
            case 1:  // Addition
                result = num1 + num2;
                printf("Result: %.2lf + %.2lf = %.2lf\n", num1, num2, result);
                break;
            case 2:  // Subtraction
                result = num1 - num2;
                printf("Result: %.2lf - %.2lf = %.2lf\n", num1, num2, result);
                break;
            case 3:  // Multiplication
                result = num1 * num2;
                printf("Result: %.2lf * %.2lf = %.2lf\n", num1, num2, result);
                break;
            case 4:  // Division
                if (num2 != 0) {
                    result = num1 / num2;
                    printf("Result: %.2lf / %.2lf = %.2lf\n", num1, num2, result);
                } else {
                    printf("Error: Division by zero is not allowed.\n");
                }
                break;
            case 5:  // Exponentiation
                result = pow(num1, num2);
                printf("Result: %.2lf ^ %.2lf = %.2lf\n", num1, num2, result);
                break;
            default:
                printf("Invalid operation.\n");
                break;
        }
    }

    return 0;
}
