#include<iostream>
using namespace std;

int main() {
    int n;

    // Take size of the array from user
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n]; // Declare array of size n

    // Take array elements from user
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Insertion sort algorithm
    for (int i = 1; i < n; i++) {
        int key = arr[i]; // Current element to be compared
        int j = i - 1;

        // Shift elements of arr[0..i-1] that are greater than key
        // to one position ahead of their current position
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key; // Place the key in its correct position
    }

    // Print the sorted array
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
