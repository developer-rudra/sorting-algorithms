#include<iostream>
using namespace std;

int selectionSort(int arr[], int n) {
    for(int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for(int j = i + 1; j < n; j++) {
            if(arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]);
    }

    // just return 0 as placeholder
    return 0;
}

int main() {
    int arr[] = {2, 1, 3, 7, 5, 4, 11, 9};
    int n = sizeof(arr) / sizeof(arr[0]);

    // calling function (return value ignored)
    selectionSort(arr, n);

    // manually printing sorted array
    cout << "sorted array is: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
