#include <iostream>
#include <string>
using namespace std;

class Account{
    string name;
    int id, balance;
public:
    Account();
    Account(string n, int i, int b);
    void deposit(int money);
    string getOwner();
    int withdraw(int money);
    int inquiry();

};
Account::Account(){
    name = "";
    int id = balance = 0;
}
Account::Account(string n, int i, int b){
    name = n, id = i, balance = b;
}
void Account::deposit(int money){
    balance += money;
}
string Account::getOwner(){
    return name;
}
int Account::withdraw(int money){
    balance -= money;
    return money;
}
int Account::inquiry(){
    return balance;
}

int main() {
    Account a("달건이", 1, 5000);
    a.deposit(50000);
    cout << a.getOwner() << "의 잔액은 " << a.inquiry() << endl;
    int money = a.withdraw(20000);
    cout << a.getOwner() << "의 잔액은 " << a.inquiry() << endl;
    return 0;
}