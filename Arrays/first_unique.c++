#include <iostream>
using namespace std;

int findFirstUnique(int arr[], int size) {
    // Write your code here
    for (int i = 0; i < size; i++) {
        int ele = arr[i];
        int count = 0;
        for (int j = 0; j < size; j++) {
            if (j != i) {
                if(arr[i] == arr[j]) {
                    count++;
                }
            }
        }
        if (count == 0)
            return arr[i];
    }
    return - 1;
}

int main(){
    int size;
    cin >> size;
    int *arr = new int[size];
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    cout << findFirstUnique(arr, size);
    return 0;
}