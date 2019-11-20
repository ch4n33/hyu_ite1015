//main.cpp
#include <iostream>
#include <cstring>
#include "account.h"


int main() {
    AccountHandler manager;
    int select;

    while(1){
        manager.ShowMenu();
        cout << "선택 : ";
        cin >> select;
        cout << endl;

        switch(select){
            case MAKE:
                manager.MakeAccount();
                break;
            case DEPOSIT:
                manager.DepositMoney();
                break;
            case WITHDRAW:
                manager.WithdrawMoney();
                break;
            case INQUIRE:
                manager.ShowAllAccInfo();
                break;
            case EXIT:
                return 0;
            default:
                cout << "잘못된 입력" << endl;
        }
    }


}