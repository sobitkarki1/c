#include <stdio.h>
#include <string.h>

#define MAX_ACCOUNTS 100

// Define a structure to represent a bank account
struct BankAccount {
    int accountNumber;
    char name[50];
    double balance;
};

// Function to create a new bank account
void createAccount(struct BankAccount accounts[], int *count) {
    if (*count >= MAX_ACCOUNTS) {
        printf("Cannot create more accounts. Maximum limit reached.\n");
        return;
    }

    printf("Enter account number: ");
    scanf("%d", &accounts[*count].accountNumber);
    printf("Enter account holder's name: ");
    scanf(" %[^\n]%*c", accounts[*count].name); // Read name with spaces
    accounts[*count].balance = 0.0;

    (*count)++;
    printf("Account created successfully!\n");
}

// Function to deposit money into an account
void depositMoney(struct BankAccount accounts[], int count) {
    int accountNumber;
    double amount;
    printf("Enter account number: ");
    scanf("%d", &accountNumber);

    for (int i = 0; i < count; i++) {
        if (accounts[i].accountNumber == accountNumber) {
            printf("Enter amount to deposit: ");
            scanf("%lf", &amount);

            if (amount <= 0) {
                printf("Invalid amount. Please enter a positive value.\n");
                return;
            }

            accounts[i].balance += amount;
            printf("Amount deposited successfully! New balance: $%.2lf\n", accounts[i].balance);
            return;
        }
    }

    printf("Account with number %d not found.\n", accountNumber);
}

// Function to withdraw money from an account
void withdrawMoney(struct BankAccount accounts[], int count) {
    int accountNumber;
    double amount;
    printf("Enter account number: ");
    scanf("%d", &accountNumber);

    for (int i = 0; i < count; i++) {
        if (accounts[i].accountNumber == accountNumber) {
            printf("Enter amount to withdraw: ");
            scanf("%lf", &amount);

            if (amount <= 0) {
                printf("Invalid amount. Please enter a positive value.\n");
                return;
            }

            if (accounts[i].balance >= amount) {
                accounts[i].balance -= amount;
                printf("Amount withdrawn successfully! New balance: $%.2lf\n", accounts[i].balance);
            } else {
                printf("Insufficient balance. Current balance: $%.2lf\n", accounts[i].balance);
            }
            return;
        }
    }

    printf("Account with number %d not found.\n", accountNumber);
}

// Function to check the balance of an account
void checkBalance(struct BankAccount accounts[], int count) {
    int accountNumber;
    printf("Enter account number: ");
    scanf("%d", &accountNumber);

    for (int i = 0; i < count; i++) {
        if (accounts[i].accountNumber == accountNumber) {
            printf("Account holder: %s\n", accounts[i].name);
            printf("Current balance: $%.2lf\n", accounts[i].balance);
            return;
        }
    }

    printf("Account with number %d not found.\n", accountNumber);
}

int main() {
    struct BankAccount accounts[MAX_ACCOUNTS];
    int count = 0;
    int choice;

    while (1) {
        printf("\nBanking System Menu\n");
        printf("1. Create Account\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Check Balance\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                createAccount(accounts, &count);
                break;
            case 2:
                depositMoney(accounts, count);
                break;
            case 3:
                withdrawMoney(accounts, count);
                break;
            case 4:
                checkBalance(accounts, count);
                break;
            case 5:
                printf("Exiting...\n");
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}
