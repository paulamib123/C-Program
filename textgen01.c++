#include <iostream>
#include <random>
#include <vector>
#include <fstream>
#include <string>
#include <algorithm>

using namespace std;

const string ALPHABETS("abcdefghijklmnopqrstuvwxyz");
default_random_engine rand_engine;
uniform_int_distribution<size_t> dist(0, ALPHABETS.length() - 1);

string make_word(int how_long) {
    string word;
    for (int i = 0; i < how_long; ++i) {
        word += ALPHABETS[dist(rand_engine)];
    }            
    return word;
}

vector<string> all_words(string filename) {
    vector<string> word_list;
    fstream f;
    f.open(filename, ios::in);
    if (f.is_open()) {
        string word;
        while (getline(f, word)) {
            word_list.push_back(word);
        }
    }

    return word_list;
    
}

int main(int argc, char* argv[]) {
    int count = 0;
    vector<string> v;
    v = all_words("sowpods.txt");

    for (int i = 0; i < 10; i++) {
        while (find(v.begin(), v.end(), make_word(stoi(argv[1]))) {   
                count++;
                cout << make_word(stoi(argv[i])) << " " << count << endl;
        }
        
    }

    cout << endl;
    return 0;
}

