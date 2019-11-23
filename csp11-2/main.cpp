#include <iostream>
#include "Loop.h"

using namespace std;

int main() {
    forLoopAdder forloop("For Loop");
    forloop.run();
    whileLoopAdder whileloop("While Loop");
    whileloop.run();
    dowhileLoopAdder dowhileloop("Do While Loop");
    dowhileloop.run();
    return 0;
}