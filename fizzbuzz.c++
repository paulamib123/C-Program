#include <iostream>
#include <vector>
#include <string>

using namespace std;
string fizzbuzz(int);
vector<string> seq(int);

int main(int argc, char* argv[]){
    
    int number = stoi(argv[1]);
    vector<string> series;
    series = seq(number);
    for (string const c : series){
        cout << c << endl;
    }
}

vector<string> seq(int n){
    vector<string> sequence;

    for (int i = 1; i <= n; i++){
        sequence.push_back(fizzbuzz(i));
    }

    return sequence;
}

string fizzbuzz(int n){
    if (n % 15 == 0){
        return "FizzBuzz";
    }

    else if (n % 3 == 0){
        return "Fizz";
    }

    else if (n % 5 == 0){
        return "Buzz";
    }

    else {
        return to_string(n);
    }
}
