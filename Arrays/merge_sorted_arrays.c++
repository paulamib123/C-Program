#include <iostream>
using namespace std;

int * mergeArrays(int arr1[], int arr2[], int arr1Size,int arr2Size)
{
    int * arr3;
    arr3 = new int[arr2Size + arr1Size];
    int i = 0, j = 0, k = 0;

    while(i < arr1Size && j < arr2Size) {
        if (arr1[i] < arr2[j]) {
            arr3[k++] = arr1[i++];
        }
        else {
            arr3[k++] = arr2[j++];
        }
    }

    while (i < arr1Size) {
        arr3[k++] = arr1[i++];
    }

    while(j < arr2Size) {
        arr3[k++] = arr2[j++];
    }

    return arr3; 
}

int main()
{
    int arr1[100];
    int arr2[100];
    int n1;
    int n2;

    cin >> n1;
    cin >> n2;

    int * arr3;
    int size = n1 + n2;

    arr3 = new int[size];
    
    for (int i = 0; i < n1; i++) {
        cin >> arr1[i];
    }
    
    for (int i = 0; i < n1; i++) {
        cin >> arr2[i];
    }

    arr3 = mergeArrays(arr1, arr2, n1, n2);

    for (int i = 0; i < size; i++) {
        cout << arr3[i];
    }
    return 0;
}