// Malika Xasanboyeva 220106
// 2.09.2025  | Tuesday 14:00
// Classes


// 1.
#include <iostream>
using namespace std;

class BankAccount {
private:
    double balance;

public:
    BankAccount(double initialBalance) {
        balance = (initialBalance >= 0) ? initialBalance : 0;
    }

    void deposit(double amount) {
        if (amount > 0) balance += amount;
    }

    double getBalance() {
        return balance;
    }
};

int main() {
    BankAccount myAccount(100.50);
    cout << "Initial balance: " << myAccount.getBalance() << endl;

    myAccount.deposit(50.25);
    cout << "Balance after deposit: " << myAccount.getBalance() << endl;

    return 0;
}




/*

2.
A class is a blueprint that defines properties and behavior. An object (instance) 
is a real thing created from that blueprint.


3. 
public: accessible everywhere.
private: accessible only inside the class.
protected: accessible inside the class and its subclasses.

4.
A constructor initializes an object when it’s created.
A default constructor has no parameters. If you don’t define any constructor, 
the compiler provides a default one automatically.


*/
