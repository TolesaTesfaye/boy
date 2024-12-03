#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

void displayMenu() {
    cout << "Menu:\n";
    cout << "1. Add names\n";
    cout << "2. Search names\n";
    cout << "3. Sort names\n";
    cout << "4. Exit\n";
    cout << "Choose an option: ";
}

void addNames(string names[], int& size) {
    int n;
    cout << "Enter the number of names to add: ";
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cout << "Enter name " << (size + 1) << ": ";
        cin >> names[size++];
    }
}

void linearSearch(const string names[], int size) {
    string data;
    cout << "Enter the name to search: ";
    cin >> data;
    for (int i = 0; i < size; ++i) {
        if (names[i] == data) {
            cout << "The name is found at index: " << i << endl;
            return;
        }
    }
    cout << "Name not found." << endl;
}

void binarySearch(string names[], int size) {
    string data;
    cout << "Enter the name to search: ";
    cin >> data;
    int lb = 0, ub = size - 1, mid;
    while (lb <= ub) {
        mid = (lb + ub) / 2;
        if (names[mid] == data) {
            cout << "The name is found at index: " << mid << endl;
            return;
        }
        if (names[mid] < data) {
            lb = mid + 1;
        } else {
            ub = mid - 1;
        }
    }
    cout << "Name not found." << endl;
}

void simpleSort(string names[], int size) {
    // A simple sorting algorithm
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (names[j] > names[j + 1]) {
                swap(names[j], names[j + 1]);
            }
        }
    }
    cout << "Names sorted using Simple Sort:\n";
    for (int i = 0; i < size; i++) {
        cout << names[i] << " ";
    }
    cout << endl;
}

void bubbleSort(string names[], int size) {
    // Bubble sort implementation (already defined)
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (names[j] > names[j + 1]) {
                swap(names[j], names[j + 1]);
            }
        }
    }
    cout << "Names sorted using Bubble Sort:\n";
    for (int i = 0; i < size; i++) {
        cout << names[i] << " ";
    }
    cout << endl;
}

void selectionSort(string names[], int size) {
    // Selection sort implementation (already defined)
    for (int i = 0; i < size - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < size; j++) {
            if (names[j] < names[minIndex]) {
                minIndex = j;
            }
        }
        swap(names[i], names[minIndex]);
    }
    cout << "Names sorted using Selection Sort:\n";
    for (int i = 0; i < size; i++) {
        cout << names[i] << " ";
    }
    cout << endl;
}

void insertionSort(string names[], int size) {
    // Insertion sort implementation (already defined)
    for (int i = 1; i < size; i++) {
        string key = names[i];
        int j = i - 1;
        while (j >= 0 && names[j] > key) {
            names[j + 1] = names[j];
            j--;
        }
        names[j + 1] = key;
    }
    cout << "Names sorted using Insertion Sort:\n";
    for (int i = 0; i < size; i++) {
        cout << names[i] << " ";
    }
    cout << endl;
}

int main() {
     int n;
    string names[n];
    int size = 0;
    char opt;

    while (true) {
        displayMenu();
        cin >> opt;

        switch (opt) {
            case '1':
                addNames(names, size);
                break;
            case '2':
                cout << "Select search method:\n1. Linear Search\n2. Binary Search\nChoose an option: ";
                char searchOpt;
                cin >> searchOpt;
                if (searchOpt == '1') {
                    linearSearch(names, size);
                } else if (searchOpt == '2') {
                    // Ensure the list is sorted for binary search
                    sort(names, names + size);
                    binarySearch(names, size);
                } else {
                    cout << "Invalid option." << endl;
                }
                break;
            case '3':
                cout << "Select sorting method:\n1. Simple Sort\n2. Bubble Sort\n3. Selection Sort\n4. Insertion Sort\nChoose an option: ";
                char sortOpt;
                cin >> sortOpt;
                if (sortOpt == '1') {
                    simpleSort(names, size);
                } else if (sortOpt == '2') {
                    bubbleSort(names, size);
                } else if (sortOpt == '3') {
                    selectionSort(names, size);
                } else if (sortOpt == '4') {
                    insertionSort(names, size);
                } else {
                    cout << "Invalid option." << endl;
                }
                break;
            case '4':
                cout << "Exiting program." << endl;
                return 0;
            default:
                cout << "Invalid option. Please try again." << endl;
        }
    }

return 0;}
