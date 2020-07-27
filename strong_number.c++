#include <iostream>
#include <vector>

using namespace std;
bool is_strong_number(int n);

int main(int argc, char* argv[]){
    int n = stoi(argv[1]);
    vector<int> v;

    for (int i = 1; i < n; ++i) {        
        if (is_strong_number(i) == 1) {
            v.push_back(i);
        }
    }

    return 0;

}

bool is_strong_number(int n){
    int sum = 0;
    int factorial[] = {1, 1, 2, 6, 24, 120, 720, 5040, 40320, 362880, 3628800};
    int digit;

    while (n > 0) {

        digit = n % 10;
        sum += factorial[digit];
        n = n / 10;
    }
    return sum == n;
}
