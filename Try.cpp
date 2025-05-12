#include<iostream>
using namespace std;

const int MAX = 100;

class account {
    string name;
    float balance;
    string transactionType[MAX];
    float transactionAmount[MAX];
    int txnCount;

public:
    account() {
        balance = 0.0;
        txnCount = 0;
    }

    void with(float am) {
        if (am > balance) {
            throw string("Invalid amount");
        }
        balance -= am;
        transactionType[txnCount] = "Withdraw";
        transactionAmount[txnCount] = am;
        txnCount++;
    }

    void depo(float am) {
        balance += am;
        transactionType[txnCount] = "Deposit";
        transactionAmount[txnCount] = am;
        txnCount++;
        cout << "Now Balance is " << balance << endl;
    }

    void transaction() {
        if (txnCount == 0) {
            cout << "No transactions yet.\n";
            return;
        }
        for (int i = 0; i < txnCount; i++) {
            cout << i + 1 << ". " << transactionType[i] << ": " << transactionAmount[i] << endl;
        }
    }
};

void showError(string function, string error) {
    cout << "[ERROR] in " << function << ": " << error << "\n";
}

int main() {
    float amount;
    account acc;
    int ch;

menu:
    cout << "\n1. Deposit amount\n2. Withdraw amount\n3. Transaction history\n4. Exit\n";
    cout << "Enter your choice: ";
    cin >> ch;

    switch (ch) {
    case 1:
        cout << "Enter the amount: ";
        cin >> amount;
        acc.depo(amount);
        goto menu;

    case 2:
        try {
            cout << "Enter the amount: ";
            cin >> amount;
            acc.with(amount);
        } catch (string msg) {
            showError("withdraw", msg);
        }
        goto menu;

    case 3:
        acc.transaction();
        goto menu;

    case 4:
        cout << "Thank you for visiting our banking system.\n";
        break;

    default:
        cout << "Invalid choice.\n";
        goto menu;
    }

    return 0;
}
