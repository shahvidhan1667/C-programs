#include <stdio.h>
#include <string.h>

struct Customer {
    int accNo;
    char name[50];
    float balance;
};

void printLowBalance(struct Customer customers[], int n) {
    for (int i = 0; i < n; i++) {
        if (customers[i].balance < 100) {
            printf("Account No: %d, Name: %s\n", customers[i].accNo, customers[i].name);
        }
    }
}

void updateBalance(struct Customer customers[], int n, int accNo, float amount, int code) {
    for (int i = 0; i < n; i++) {
        if (customers[i].accNo == accNo) {
            if (code == 1) {
                customers[i].balance += amount;
            } else if (code == 0) {
                if (customers[i].balance >= amount) {
                    customers[i].balance -= amount;
                } else {
                    printf("The balance is insufficient for the specified withdrawal.\n");
                }
            }
            return;
        }
    }
    printf("Account not found.\n");
}

int main() {
    struct Customer customers[10] = {
        {101, "Alice", 50},
        {102, "Bob", 200},
        {103, "Charlie", 80}
    };
    int n = 3;

    printf("Customers with balance below Rs. 100:\n");
    printLowBalance(customers, n);

    updateBalance(customers, n, 101, 30, 0); // Withdrawal
    updateBalance(customers, n, 102, 50, 1); // Deposit

    return 0;
}
