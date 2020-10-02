#include <iostream>
using namespace std;

int findSecondMaximum(int arr[], int size) {
    int maximum =  INT_MIN;
    int secondmax = INT_MIN;
    // Write your code here
    for (int i = 0; i < size; i++) {
        if (arr[i] > maximum) {
            maximum = i;
        }
    }

    for (int j = 0; j < size; j++) {
        if (j != maximum) {
            if (arr[j] > secondmax) {
                secondmax = arr[j];
            }
        }
    }
    return secondmax;
}

int main(){
    int size;
    cin >> size;
    int *arr = new int[size];

    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    cout << findSecondMaximum(arr, size);
    return 0;
}