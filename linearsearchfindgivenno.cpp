#include<iostream>
using namespace std;

bool search(int arr[], int size, int key) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            return true;
        }
    }
    return false;
}

int main() {
    int arr[10] = {1, 4, 6, 4, 7, 8, 58, 4, 7, 2};
    int key;
    cout << "Enter the element for search: ";
    cin >> key;

    bool found = search(arr, 10, key);

    if (found) {
        cout << "Number is present." << endl;
    } else {
        cout << "Number is not present." << endl;
    }

    return 0;
}
