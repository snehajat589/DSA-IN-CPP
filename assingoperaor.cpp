#include <iostream>
using namespace std;

int main() {
    float balance, withdraw;

    cout << "Enter current balance: ";
    cin >> balance;

    cout << "Enter withdrawal amount: ";
    cin >> withdraw;

    balance -= withdraw;

    cout << "Updated Balance = " << balance;

    return 0;
}