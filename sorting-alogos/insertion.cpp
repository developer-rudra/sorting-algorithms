#include<iostream>
using namespace std;

void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];        // current element jise sort karna hai
        int j = i - 1;

        // Peeche jaake dekho key se bade elements ko aage shift karo
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];  // bade element ko ek jagah aage shift karo
            j--;
        }

        arr[j + 1] = key;         // key ko uski sahi jagah pe daal do
    }
}

int main() {
    int arr[] = {5, 2, 9, 1, 3};
    int n = sizeof(arr)/sizeof(arr[0]);

    insertionSort(arr, n);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
