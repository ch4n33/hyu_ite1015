#include <iostream>

using namespace std;

int isLow(char a);
int isUp (char b);
void toLow(char &c);
void toUp(char &d);

int main() {
    cout << "INPUT AN ENGLISH WORD" << endl;
    char array[100];
    cin >> array;
    int len = strlen(array);
    int low, up;

    for (int i = 0; i < len; ++i) {
        low = isLow(array[i]);
        up = isUp(array[i]);
        if(low == 1) toUp(array[i]);
        if(up == 1) toLow(array[i]);
    }
    cout << array << endl;
    return 0;
}

int isLow(char a){
    if(a < 123 && a > 96){
        return 1;
    }
    return 0;
}
int isUp(char a){
    if(a < 91 && a > 64){
        return 1;
    }
    return 0;
}
void toLow( char &c){
    c += 32;
}
void toUp(char &d){
    d -= 32;
}