#include <iostream>
#include <string>
#include <vector>

using namespace std;
int difference(int);
vector<int> seq(int);

int main(int argc, char* argv[]){

    int number;
    int differ;
    vector<int> kaprekar;

    //number = stoi(argv[1]);
    kaprekar = seq(number);
    cout << difference(3087);
    //for(const int c : kaprekar){
        //cout << c << endl;
    //}

    return 0;
}

int difference(int n){
    string s;
    int smallest, largest;

    s = to_string(n);

    sort(s.begin(), s.end());
    smallest = stoi(s);

    s = to_string(smallest);

    sort(s.begin(), s.end(), greater<int>);
    largest = stoi(s)
    cout << smallest << endl;
    cout << largest << endl;
    return largest - smallest;
}

vector<int> seq(int n){
    vector<int> kaprekar;
    int diff;

    kaprekar.push_back(n);
   
    while (n != difference(n)){
        n = difference(n);
        kaprekar.push_back(n);
    } 

    return kaprekar;
}

