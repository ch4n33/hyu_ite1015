#include <iostream>
using namespace std;


int main() {
    cout << "계산기\n첫 정수를 입력해주세요" << endl;
    int a, result;
    double c;
    char b;
    cin >> a;
    cout << "+,-,*,/ 중 하나의 연산자를 입력해주세요" << endl;
    cin >> b;
    cout << "두번째 정수를 입력해주세요" << endl;
    cin >> c;

    if(b == '+')  cout << a << b << c <<" = "<< a+c;
    else if(b == '-')  cout << a << b << c <<" = "<<a-c;
    else if(b == '*')  cout << a << b << c <<" = "<<a*c;
    else if(b == '/' && c!= 0)  cout << a << b << c <<" = "<<a/c;
    else if(b == '/' && c== 0)  cout << "0으로는 나눌 수 없습니다" <<endl;
    else cout <<"연산자가 옳지 않습니다"<<endl;

        return 0;
}