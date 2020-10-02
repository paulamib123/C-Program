#include <iostream>
using namespace std;

void rightRotate(int arr[], int size) {
  // Write your code here  
  cout << arr[size - 1];
  for (int i = 0; i <= size - 2; i++) {
      cout << arr[i];
  }
}

int main(){
    int size;
    cin >> size;
    int *arr = new int[size];

    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    rightRotate(arr, size);
    return 0;
}