#include<iostream>
#include<string>
using namespace std;

// Bank Account Class
class BankAccount {
private:
    string accountHolderName;
    int accountNumber;
    double balance;

public:
    // Constructor to initialize account
    BankAccount(string name, int number, double initialDeposit) {
        accountHolderName = name;
        accountNumber = number;
        balance = initialDeposit;
        cout << "Account created successfully!" << endl;
    }

    // Function to display account details
    void displayAccountDetails() {
        cout << "\nAccount Details:" << endl;
        cout << "Account Holder: " << accountHolderName << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: rs" << balance << endl;
    }

    // Function to deposit money
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposit successful! New Balance: rs" << balance << endl;
        } else {
            cout << "Invalid deposit amount!" << endl;
        }
    }

    // Function to withdraw money
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrawal successful! New Balance: rs" << balance << endl;
        } else {
            cout << "Invalid or insufficient balance for withdrawal!" << endl;
        }
    }

    // Function to check the balance
    double checkBalance() {
        return balance;
    }
};

// Main function
int main() {
    string name;
    int accountNumber;
    double initialDeposit;

    cout << "Welcome to Banking Management System" << endl;
    
    // Creating a bank account
    cout << "Enter Account Holder Name: ";
    getline(cin, name);
    
    cout << "Enter Account Number: ";
    cin >> accountNumber;
    
    cout << "Enter Initial Deposit Amount: ";
    cin >> initialDeposit;

    // Create an object of BankAccount
    BankAccount account(name, accountNumber, initialDeposit);

    int choice;
    do {
        // Menu for banking options
        cout << "\nBanking Options:" << endl;
        cout << "1. Display Account Details" << endl;
        cout << "2. Deposit Money" << endl;
        cout << "3. Withdraw Money" << endl;
        cout << "4. Check Balance" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            account.displayAccountDetails();
            break;
        case 2: {
            double depositAmount;
            cout << "Enter deposit amount: ";
            cin >> depositAmount;
            account.deposit(depositAmount);
            break;
        }
        case 3: {
            double withdrawAmount;
            cout << "Enter withdrawal amount: ";
            cin >> withdrawAmount;
            account.withdraw(withdrawAmount);
            break;
        }
        case 4:
            cout << "Current Balance: rs" << account.checkBalance() << endl;
            break;
        case 5:
            cout << "Exiting..." << endl;
            break;
        default:
            cout << "Invalid choice!" << endl;
        }
    } while (choice != 5);

    return 0;
}
