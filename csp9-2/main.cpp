#include <iostream>
#include <string>
#include <queue>

using namespace std;

int main() {
    int n;
    queue<int> q;
    cin >> n;
    cin.ignore();

    for (int i = 0; i < n; ++i) {
        string text;
        int input;
        getline(cin,text);

        cin.clear();

        if(text == "push"){
            cin >> input;
            q.push(input);
            n++;
        }
        else if(text == "pop"){
            cout << q.front() << endl;
            q.pop();
        }
        else if(text == "front"){
            cout << q.front() << endl;
        }
        else if(text == "back"){
            cout << q.back() << endl;
        }
        else if (text == "size"){
            cout << q.size()<< endl;
        }
        else if (text == "empty"){
            if(q.empty())  cout << -1<< endl;
            else cout << 0 << endl;
        }
    }

    return 0;
}