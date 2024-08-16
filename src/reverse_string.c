#include <stdio.h>
#include <string.h>

int main() {
    char str[100], reversed[100];
    int length, i, j;

    // Asking the user to enter a string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Removing the newline character from the input, if present
    length = strlen(str);
    if (str[length - 1] == '\n') {
        str[length - 1] = '\0';
        length--;
    }

    // Reversing the string
    j = 0;
    for (i = length - 1; i >= 0; i--) {
        reversed[j++] = str[i];
    }
    reversed[j] = '\0'; // Null-terminate the reversed string

    // Printing the reversed string
    printf("Reversed string: %s\n", reversed);

    return 0;
}
