#include <iostream>
#include <vector>
using namespace std;

class Account {
private:
    static int accountCounter; // Static counter for unique account numbers
    int accountNumber;
    string holderName;
    double balance;

public:
    Account(string name, double initialBalance) {
        accountNumber = ++accountCounter;
        holderName = name;
        balance = initialBalance;
    }

    int getAccountNumber() const { return accountNumber; }
    string getHolderName() const { return holderName; }
    double getBalance() const { return balance; }

    void deposit(double amount) {
        balance += amount;
        cout << "Deposited " << amount << " successfully! New balance: " << balance << endl;
    }

    bool withdraw(double amount) {
        if (amount > balance) {
            cout << "Insufficient balance!" << endl;
            return false;
        }
        balance -= amount;
        cout << "Withdrawn " << amount << " successfully! New balance: " << balance << endl;
        return true;
    }

    void displayAccountInfo() const {  // Fixed: Added 'const' here
        cout << "Account Number: " << accountNumber 
             << " | Holder: " << holderName 
             << " | Balance: " << balance << endl;
    }

    bool transfer(Account &receiver, double amount) {
        if (withdraw(amount)) {
            receiver.deposit(amount);
            cout << "Transfer successful! " << amount << " sent to Account " 
                 << receiver.getAccountNumber() << endl;
            return true;
        }
        return false;
    }
};

// Initialize static member variable
int Account::accountCounter = 1000; // Starting account number from 1001

class Bank {
private:
    vector<Account> accounts;

public:
    void createAccount() {
        string name;
        double initialBalance;
        cout << "Enter Account Holder Name: ";
        cin.ignore(); 
        getline(cin, name);
        cout << "Enter Initial Deposit Amount: ";
        cin >> initialBalance;
        accounts.emplace_back(name, initialBalance);
        cout << "Account created successfully! Your Account Number is: " 
             << accounts.back().getAccountNumber() << endl;
    }

    Account* findAccount(int accNum) {
        for (auto &acc : accounts) {
            if (acc.getAccountNumber() == accNum)
                return &acc;
        }
        return nullptr;
    }

    void depositAmount() {
        int accNum;
        double amount;
        cout << "Enter Account Number: ";
        cin >> accNum;
        Account *acc = findAccount(accNum);
        if (acc) {
            cout << "Enter Deposit Amount: ";
            cin >> amount;
            acc->deposit(amount);
        } else {
            cout << "Account not found!" << endl;
        }
    }

    void withdrawAmount() {
        int accNum;
        double amount;
        cout << "Enter Account Number: ";
        cin >> accNum;
        Account *acc = findAccount(accNum);
        if (acc) {
            cout << "Enter Withdrawal Amount: ";
            cin >> amount;
            acc->withdraw(amount);
        } else {
            cout << "Account not found!" << endl;
        }
    }

    void transferAmount() {
        int senderAcc, receiverAcc;
        double amount;
        cout << "Enter Sender Account Number: ";
        cin >> senderAcc;
        cout << "Enter Receiver Account Number: ";
        cin >> receiverAcc;
        cout << "Enter Transfer Amount: ";
        cin >> amount;

        Account *sender = findAccount(senderAcc);
        Account *receiver = findAccount(receiverAcc);

        if (!sender || !receiver) {
            cout << "Invalid account number(s)!" << endl;
            return;
        }

        sender->transfer(*receiver, amount);
    }

    void displayAllAccounts() const {  // Fixed: Made the function 'const'
        if (accounts.empty()) {
            cout << "No accounts available!" << endl;
            return;
        }
        for (const auto &acc : accounts) {
            acc.displayAccountInfo();  // No more 'const' error here
        }
    }
};

int main() {
    Bank bank;
    int choice;
    
    while (true) {
        cout << "\n--- Bank Management System ---\n";
        cout << "1. Create Account\n2. Deposit Money\n3. Withdraw Money\n4. Transfer Money\n5. Display All Accounts\n6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                bank.createAccount();
                break;
            case 2:
                bank.depositAmount();
                break;
            case 3:
                bank.withdrawAmount();
                break;
            case 4:
                bank.transferAmount();
                break;
            case 5:
                bank.displayAllAccounts();
                break;
            case 6:
                cout << "Thank you for using the Bank System!" << endl;
                return 0;
            default:
                cout << "Invalid choice! Please try again." << endl;
        }
    }
}
