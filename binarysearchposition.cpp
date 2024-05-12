#include<iostream>
using namespace std;

int binarysearch(int arr[], int n, int key) {
    int start = 0;
    int end = n - 1;
    int mid;
    int index = n;

    // Binary search for insert position
    while (start <= end) {
        mid = start + (end - start) / 2;
        if (arr[mid] == key) {
            index = mid;
            break;
        } else if (arr[mid] < key) {
            start = mid + 1;
        } else {
            index = mid;
            end = mid - 1;
        }
        return index;
    }
}

int main() {
    int arr[1000];
    int n;
    cout << "Enter the size: ";
    cin >> n;
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int key;
    cout << "Enter the number you want to search: ";
    cin >> key;

    cout<< binarysearch(arr, n, key);
    return 0;
}
