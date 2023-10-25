#include <stdio.h>

// Function to display the main menu
void displayMenu() {
    printf("\n************ ATM ************\n");
    printf("1. Check Balance\n");
    printf("2. Deposit\n");
    printf("3. Withdraw\n");
    printf("4. Exit\n");
    printf("*******************************\n");
}

int main() {
    // Initialize account balance
    float balance = 1000.0;
    int choice;
    float amount;

    while (1) {
        displayMenu();

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Your balance: $%.2f\n", balance);
                break;
            case 2:
                printf("Enter the deposit amount: $");
                scanf("%f", &amount);
                if (amount > 0) {
                    balance += amount;
                    printf("Deposit successful. New balance: $%.2f\n", balance);
                } else {
                    printf("Invalid amount. Please enter a positive amount.\n");
                }
                break;
            case 3:
                printf("Enter the withdrawal amount: $");
                scanf("%f", &amount);
                if (amount > 0 && amount <= balance) {
                    balance -= amount;
                    printf("Withdrawal successful. New balance: $%.2f\n", balance);
                } else if (amount > balance) {
                    printf("Insufficient funds. Your balance is $%.2f\n", balance);
                } else {
                    printf("Invalid amount. Please enter a positive amount.\n");
                }
                break;
            case 4:
                printf("Thank you for using the ATM. Goodbye!\n");
                return 0;
            default:
                printf("Invalid choice. Please select a valid option.\n");
        }
    }

    return 0;
}
