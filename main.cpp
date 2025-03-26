//******************************************************************
//Author.....: Nicki Smith
//Assignment.: Banking-System
//Description: A simple banking system program that mimics the
//display and function of an ATM's screen.
//********************************************************************
#include <iostream>
using namespace std;

int main() {
    // Initialize the balance to 0 and declare a variable for user's choice
    double balance = 0.0;
    int choice;

    // Loop to keep the program running until the user chooses to exit
    while (true) {
        // Display the main menu options
        cout << "\n=== Basic Banking System ===" << endl;
        cout << "1. Deposit Money" << endl;
        cout << "2. Withdraw Money" << endl;
        cout << "3. Check Balance" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        // Use a switch statement to handle user choice
        switch (choice) {
            case 1: {
                double depositAmount;
                cout << "Enter amount to deposit: $";
                cin >> depositAmount;

                // Validate that the deposit amount is positive
                if (depositAmount > 0) {
                    balance += depositAmount;
                    cout << "Successfully deposited $" << depositAmount << "." << endl;
                } else {
                    cout << "Invalid amount. Please enter a positive value." << endl;
                }
                break;
            }

            case 2: {
                double withdrawAmount;
                cout << "Enter amount to withdraw: $";
                cin >> withdrawAmount;

                // Validate withdrawal: ensure positive amount and sufficient balance
                if (withdrawAmount > 0 && withdrawAmount <= balance) {
                    balance -= withdrawAmount;
                    cout << "Successfully withdrew $" << withdrawAmount << "." << endl;
                } else if (withdrawAmount <= 0) {
                    cout << "Invalid amount. Please enter a positive value." << endl;
                } else {
                    cout << "Insufficient balance. Your current balance is $" << balance << "." << endl;
                }
                break;
            }

            case 3:
                // Display the current account balance
                cout << "Your current balance is: $" << balance << endl;
                break;

            case 4:
                // Exit the program when the user selects 4
                cout << "Exiting the program. Thank you!" << endl;
                return 0;

            default:
                // Handle invalid input
                cout << "Invalid choice. Please enter a number between 1 and 4." << endl;
        }
    }

    return 0;
}
