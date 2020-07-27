#include <iostream>
#include <stack>
#include <string>

using namespace std;
string decode(string s);

int main(){
    string s;
    cin >> s;
    cout << decode(s) << endl;
}

string decode(string s){
    stack<int> Stack;
    string result;

    for (int i = 0; i <= s.length(); ++i) {
        Stack.push(i + 1);

        if (i == s.length() || s[i] == 'I') {
            while(!Stack.empty()) {
                result += to_string(Stack.top());
                Stack.pop();
            }
        }


    }
    
    return result;
}

