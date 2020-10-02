#include<iostream>
using namespace std;

int * findProduct(int arr[], int size) {
    int * product = new int[size];
    int multiplication;
    for (int i = 0; i < size; i++) {
        multiplication = 1;
        for(int j = 0; j < size; j++) {
            if (j == i) {
                continue;
            }
            else {
                multiplication *= arr[j];
            }
        }
        product[i] = multiplication;
    }
    return product;
}

int main() {
    int n;
    cin >> n;
    int * arr = new int[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    arr = findProduct(arr, n);

    for (int i = 0; i < n; i++) {
        cout << arr[i];
    }
    return 0;
}