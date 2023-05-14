#include <stdio.h>

int main() {
    int pin = 1234;      
    float balance = 1000;
    int choice;          
    int inputPin;      
    float amount;      

    while (1) {
    	printf("Welcome to the ATM\n");
    	printf("How may we help you?\n");
        printf("ATM Menu:\n");
        printf("1. Check Balance\n");
        printf("2. Withdraw Money\n");
        printf("3. Deposit Money\n");
        printf("4. Change PIN\n");
        printf("5. Exit\n");
        printf("Enter your choice (1-5): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Your current balance is: $%.2f\n", balance);
                break;
            case 2:
                printf("Enter the amount to withdraw: $");
                scanf("%f", &amount);
                if (amount > balance) {
                    printf("Insufficient balance\n");
                } else {
                    balance -= amount;
                    printf("Withdrawn amount: $%.2f\n", amount);
                    printf("Remaining balance: $%.2f\n", balance);
                }
                break;
            case 3:
                printf("Enter the amount to deposit: $");
                scanf("%f", &amount);
                if (amount < 0) {
                    printf("Invalid amount\n");
                } else {
                    balance += amount;
                    printf("Deposited amount: $%.2f\n", amount);
                    printf("Current balance: $%.2f\n", balance);
                }
                break;
            case 4:
                printf("Enter current PIN: ");
                scanf("%d", &inputPin);
                if (inputPin == pin) {
                    printf("Enter new PIN: ");
                    scanf("%d", &pin);
                    printf("PIN changed successfully\n");
                } else {
                    printf("Incorrect PIN\n");
                }
                break;
            case 5:
                printf("Thank you for using the ATM!\n");
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
                break;
        }
    }

    return 0;
}
