#include <iostream>
#include <cstring>

using namespace std;


void flip(char *s);
void swap(char &a, char &b);

int main() {
    char string[100];
    char a, b;

    cout << "enter string" <<endl;
    cin >>string;
    flip(string );
    cout <<string <<endl;

    cout << "enter 2 character" << endl;
    cin >> a;
    cin >> b;
    swap (a,b);
    cout << a <<endl << b;

    return 0;
}


void flip (char *string){

    int length = strlen(string);
    char temp[100];
    for (int i = 0; i < length; ++i) {
        *(temp + i) = *(string + length - 1 -i);
    }
    for (int i = 0; i < length; ++i) {
        *(string + i) = *(temp + i);
    }
    *(temp + length) = '\0';

}

void swap(char &a, char &b){
    char temp = a;
    a = b;
    b = temp;
}