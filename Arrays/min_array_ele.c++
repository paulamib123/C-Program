#include<iostream>
using namespace std;

int findMinimum(int arr[], int size) {
	int minimum = arr[0];
    // Write your code here
    for (int i = 0; i < size; i++) {
        if (arr[i] < minimum) {
            minimum = arr[i];
        }
    }
	return minimum;
}

int main() {
    int n;
    int ans;
    cin >> n;
    int * arr = new int[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    ans = findMinimum(arr, n);
    cout << ans;
}