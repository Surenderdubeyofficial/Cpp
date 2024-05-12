#include<iostream>
using namespace std;

int* binarysearch(int arr[], int n, int key) {
    int start = 0;
    int end = n - 1;
    int mid;
    int first = -1;
    int last = -1;

    // Binary search for the first occurrence
    while (start <= end) {
        mid = start + (end - start) / 2;
        if (arr[mid] == key) {
            first = mid;
            end = mid - 1;
        } else if (arr[mid] < key) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }

    start = 0;
    end = n - 1;

    // Binary search for the last occurrence
    while (start <= end) {
        mid = start + (end - start) / 2;
        if (arr[mid] == key) {
            last = mid;
            start = mid + 1;
        } else if (arr[mid] < key) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }

    int* result = new int[2];
    result[0] = first;
    result[1] = last;
    return result;
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

    int* result = binarysearch(arr, n, key);
    cout << "First occurrence: " << result[0] << ", Last occurrence: " << result[1] << endl;

    delete[] result; // Don't forget to free the dynamically allocated memory
    return 0;
}
