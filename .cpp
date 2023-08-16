cpp
#include <iostream>
#include <string>
using namespace std;

// Structure to store user information
struct User {
    string name;
    string phoneNumber;
    double balance;
    string transactionHistory;
};

// Function to perform balance inquiry
void balanceInquiry(const User& user) {
    cout << "Balance: $" << user.balance << endl;
}

// Function to activate data plan
void activateDataPlan(User& user) {
    // Code for data plan activation goes here
    cout << "Data plan activated successfully!" << endl;
}

// Function to recharge account
void rechargeAccount(User& user) {
    // Code for account recharge goes here
    cout << "Account recharged successfully!" << endl;
}

// Function to view transaction history
void viewTransactionHistory(const User& user) {
    cout << "Transaction History: " << user.transactionHistory << endl;
}

// Function to view user profile
void viewProfile(const User& user) {
    cout << "Name: " << user.name << endl;
    cout << "Phone Number: " << user.phoneNumber << endl;
}

// Function to access customer support
void accessCustomerSupport() {
    // Code to access customer support goes here
    cout << "Customer support accessed!" << endl;
}

// Function to select language
void selectLanguage() {
    // Code for language selection goes here
    cout << "Language selected!" << endl;
}

int main() {
    // Create a user object
    User user;
    user.name = "John Doe";
    user.phoneNumber = "1234567890";
    user.balance = 100.0;
    user.transactionHistory = "Transaction 1, Transaction 2, Transaction 3";

    // Main menu with USSB codes
    cout << "Welcome to USSB Code Application!" << endl;
    cout << "1. Balance Inquiry" << endl;
    cout << "2. Activate Data Plan" << endl;
    cout << "3. Recharge Account" << endl;
    cout << "4. View Transaction History" << endl;
    cout << "5. View Profile" << endl;
    cout << "6. Access Customer Support" << endl;
    cout << "7. Select Language" << endl;
    cout << "8. Exit" << endl;

    int choice;
    do {
        cout << "Enter USSB code (1-8): ";
        cin >> choice;

        // Perform operations based on user input
        switch (choice) {
            case 1:
                balanceInquiry(user);
                break;
            case 2:
                activateDataPlan(user);
                break;
            case 3:
                rechargeAccount(user);
                break;
            case 4:
                viewTransactionHistory(user);
                break;
            case 5:
                viewProfile(user);
                break;
            case 6:
                accessCustomerSupport();
                break;
            case 7:
                selectLanguage();
                break;
            case 8:
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid USSB code! Please try again." << endl;
                break;
        }

        cout << endl;
    } while (choice != 8);

    return 0;
}
