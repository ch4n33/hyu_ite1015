//
//account.h
//

#ifndef CSP10_2_ACCOUNT_H
#define CSP10_2_ACCOUNT_H

#include <iostream>
using namespace std;
const int NAME_LEN = 20;
enum {MAKE = 1, DEPOSIT, WITHDRAW, INQUIRE, EXIT};

class Account {
    int accID, balance;
    char* cusName;
public:
    Account(int ID, int money, char* name);
    Account(const Account &ref);
    int GetAccID() const;
    void Deposit (int money);
    int Withdraw(int money);
    void ShowAccInfo() const;
    ~Account();
};
Account::Account(int ID, int money, char *name) : accID(ID), balance(money){
    int len = strlen(name) + 1;
    cusName = new char[len];
    strcpy(cusName, name);
}
Account::Account(const Account &ref) : accID(ref.accID), balance(ref.balance){
    int len = strlen(ref.cusName)+1;
    cusName = new char[len];
    strcpy(cusName,ref.cusName);
}
int Account::GetAccID() const {
    return this->accID;
}
void Account::Deposit(int money) {
    this->balance += money;
}
int Account::Withdraw(int money) {
    return (money<=this->balance) ? (this->balance -= money, money): 0;
}
void Account::ShowAccInfo() const {
    cout << "ID : " << this->accID << endl << "NAME : " << this->cusName << endl << "BALANCE : " << this->balance << endl;
}
Account::~Account(){
    delete[] cusName;
}


class AccountHandler{
    Account* accArr[100];
    int accNum;
public:
    AccountHandler();
    void ShowMenu();
    void MakeAccount();
    void DepositMoney();
    void WithdrawMoney();
    void ShowAllAccInfo() const;
    ~AccountHandler();
};

AccountHandler::AccountHandler() : accNum(0) {}

void AccountHandler::ShowMenu() {
    cout << "--------MENU--------" << endl;
    cout << "1. 계좌 개설\n2. 입금\n3. 출금\n4. 계좌정보 전체 출력\n5. 프로그램 종료\n";

}
void AccountHandler::MakeAccount(){
    int id;
    char name[NAME_LEN];
    int balance;

    cout << "[계좌 개설]" << endl << "계좌 ID: ";
    cin >> id;
    cout << "이름 : ";
    cin >> name;
    cin. clear();
    cout << "입금액 : ";
    cin >> balance;

    accArr[accNum++] = new Account(id, balance, name);
}
void AccountHandler::DepositMoney() {
    int money, id;

    cout << "[입금]" << endl << "계좌 ID: ";
    cin >> id;
    cout << "입금액 : ";
    cin >> money;

    for (int i = 0; i < accNum; ++i) {
        if (accArr[i]->GetAccID() == id){
            accArr[i]->Deposit(money);
            cout << "입금완료\n\n";
            return;
        }
    }
    cout << "유효하지 않은 ID입니다."<< endl;
}
void AccountHandler::WithdrawMoney() {
    int money, id;

    cout << "[출금]" << endl << "계좌 ID: ";
    cin >> id;
    cout << "출금액 : ";
    cin >> money;

    for (int i = 0; i < accNum; ++i) {
        if (accArr[i]->GetAccID() == id){
            accArr[i]->Withdraw(money);
            cout << "출금완료\n\n";
            return;
        }
    }
    cout << "유효하지 않은 ID입니다."<< endl;

}
void AccountHandler::ShowAllAccInfo() const {
    for (int i = 0; i < accNum; ++i) {
        accArr[i]->ShowAccInfo();
        cout << endl;
    }
}
AccountHandler::~AccountHandler() {
    for (int i = 0; i < accNum; ++i) {
        delete accArr[i];
    }
}

#endif //CSP10_2_ACCOUNT_H
