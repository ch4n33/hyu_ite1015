//Loop.h
//

#ifndef CSP11_2_LOOP_H
#define CSP11_2_LOOP_H

#include <iostream>
#include <string>
using namespace std;

class LoopAdder{
    string name; //name of the loop
    int x,y,sum;
    void read(); //read x,y
    void write();//print 'sum'
protected:
    LoopAdder(string name = ""){
        this->name = name;
    }
    int getX() {
        return x;
    }
    int getY() {
        return y;
    }
    virtual int calculate() =0;
public:
    void run(); //run a calculation
};

void LoopAdder::read() {
    cout << name << ':' << endl << "처음 수에서 두번째 수까지 더합니다. 두 수를 입력하세요 >>";
    cin >> x >> y;
}
void LoopAdder::write() {
    cout << x << "에서 " << y << "까지의 합 " << sum << "입니다." << endl;
}
void LoopAdder::run() {
    read();
    sum = this->calculate();
    write();
}
class forLoopAdder : public LoopAdder {
protected:
    int calculate();
public:
    forLoopAdder(string name) : LoopAdder(name){}

};
int forLoopAdder::calculate(){
    int sum = 0;
    for (int i = getX(); i <= getY(); ++i) {
        sum += i;
    }
    return sum;
}

class whileLoopAdder : public LoopAdder{
protected:
    int calculate();
public:
    whileLoopAdder(string name) : LoopAdder(name){}
};
int whileLoopAdder::calculate() {
    int sum = 0;
    int i = getX();
    int j = getY();
    while(j+1-i) {
        sum += i;
        i++;
    }
    return sum;
}

class dowhileLoopAdder : public LoopAdder{
protected:
    int calculate();
public:
    dowhileLoopAdder(string name) : LoopAdder(name){}
};
int dowhileLoopAdder::calculate() {
    int sum =0;
    int i = getX();
    int j = getY();
    do{
        sum += i;
        i++;
    }while(j+1-i);
    return sum;
}
#endif //CSP11_2_LOOP_H
