#include <iostream>

using namespace std;

int main(int argc, char* argv[]){
    string known_letters;
    cin >> known_letters;

    int known[26] = {0};
    for (char ch: known_letters){
        known[(int)ch - 97] = 1;
    }

    int word_count;
    cin >> word_count;

    for (int i = 0; i < word_count; i++){
        string wi;
        cin >> wi;
        bool can_read = true;

        for (int ch: wi){
            if (known[(int)ch - 97] == 0){
                cout << "No" << endl;
                can_read = false;
                break;
            }
        if (can_read){
            cout << "Yes" << endl;
            break;
        }
    }
 }
    return 0; 
}
