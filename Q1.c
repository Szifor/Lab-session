#include <stdio.h>

typedef struct {

    float balance;

} BankAccount;

void deposit(BankAccount* account, float amount) {

    account->balance += amount;

}

void withdraw(BankAccount* account, float amount) {

    if (amount <= account->balance) {

        account->balance -= amount;

    } else {

        printf("Insufficient funds.\n");

    }

}

float checkBalance(BankAccount* account) {

    return account->balance;

}

int main() {

    BankAccount account;

    account.balance = 0.0;

    // Test case 1: depositing and withdrawing funds

    deposit(&account, 1000);

    withdraw(&account, 500);

    printf("Account Balance: $%.2f\n", checkBalance(&account));  // Expected: $500.00

    // Test case 2: withdrawing more funds than the account balance

    deposit(&account, 1000);

    withdraw(&account, 1500);  // This should result in an error message

    printf("Account Balance: $%.2f\n", checkBalance(&account));  // Expected: $1000.00

    return 0;

}
