#include <iostream>

using namespace std;
int k_factor(int, int);

int main(){

    int n, k;
    cin >> n >> k;
    cout << k_factor(n, k) << endl;
}

int k_factor(int n, int k){
    int count = 0;
    for (int i = 1; i <= n; i++){
        if (n % i == 0){
            count += 1;
            if (count == k){
                return i;
            }
        }
    }
}
