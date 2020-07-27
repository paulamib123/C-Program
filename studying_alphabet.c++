#include <iostream>
#include <string>

using namespace std;
bool subset(string, string);

int main(int argc, char* argv[]){
    string alpha, word, ans;
    cout << "Enter Alphabets" << endl;
    cin >> alpha;
    cout << "Enter Word" << endl;
    cin >> word;
    ans = subset(alpha, word) ? "Yes" : "No";
    cout << ans << endl;
}

bool subset(string alpha, string word){
    int count = 0;
    for (int i = 0; i < word.size(); i++){
        for (int j = 0; j < alpha.size(); j++){
            if (word[i] == alpha[j]){
                count++;
                break;
            }
        }
    }
    return (count == word.size());
}
