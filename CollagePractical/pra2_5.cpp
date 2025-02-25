#include <iostream>
#include <math.h>
using namespace std;

class LoanAmount {
    int LoanId;
    char AppName[25];
    float TotalAmount;
    static float InterestRate;
    int LoanTenure;
    float emi;

    void Emi() {
        emi = (TotalAmount * InterestRate * pow((1 + InterestRate), LoanTenure)) /
              (pow((1 + InterestRate), LoanTenure) - 1);
    }

public:
    void LoanData() {
        cout << "Enter the loan id: ";
        cin >> LoanId;
        cout << "Enter the Applicant name: ";
        cin >> AppName;
        cout << "Enter the Loan Amount: ";
        cin >> TotalAmount;
        cout << "Enter the Loan Tenure: ";
        cin >> LoanTenure;
        Emi();
    }

    void DisplayData(int id) {
        if(id==LoanId)
        {
        cout << "Id is: " << LoanId << endl;
        cout << "Name: " << AppName << endl;
        cout << "Loan Interest: " << InterestRate << endl;
        cout << "Loan Tenure: " << LoanTenure << endl;
        cout << "The EMI is: " << emi << endl;
        }
    }
};

float LoanAmount::InterestRate = 0.12;

int main() {
    LoanAmount a;
    int id;
    int choice;
d:
    cout << "1. LoanData\n2. DisplayData\n";
    cout << "Enter the choice: ";
    cin >> choice;

    switch (choice) {
    case 1:
        a.LoanData();
        break;
    case 2:
    cout<<"Enter the id number is :";
    cin>>id;
        a.DisplayData(id);
        break;
    default:
        cout << "Invalid Data\nPlease Enter the valid choice\n";
        goto a;
    }

    goto d;
   a: return 0;
}