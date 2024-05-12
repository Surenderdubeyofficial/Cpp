#include<iostream>
using namespace std;

sizet getPivot(int arr[], int n) {
    int s = 0;
    int e = n - 1;

    while (s <= e) {
        if (arr[s] <= arr[e]) {
            return s; // Array is not rotated.
        }
        int mid = s + (e - s) / 2;
        int next = (mid + 1) % n;
        int prev = (mid + n - 1) % n;

        if (arr[mid] <= arr[next] && arr[mid] <= arr[prev]) {
            return mid;
        } else if (arr[mid] <= arr[e]) {
            e = mid - 1;
        } else {
            s = mid + 1;
        }
    }
    return -1; // Invalid input
}

int binarysearch(int arr[], int s, int e, int key) {
    int ans = -1;

    while (s <= e) {
        int mid = s + (e - s) / 2;

        if (arr[mid] == key) {
            ans = mid;
            e = mid - 1; // Move to the left subarray to find the first occurrence.
        } else if (key < arr[mid]) {
            e = mid - 1;
        } else {
            s = mid + 1;
        }
    }

    return ans;
}

int findPosition(int arr[], int n, int k) {
    size_t pivot = getPivot(arr, n);

    if (pivot == -1) {
        return -1; // Invalid input
    }

    if (k >= arr[pivot] && k <= arr[n - 1]) {
        return binarysearch(arr, pivot, n - 1, k);
    } else {
        return binarysearch(arr, 0, pivot - 1, k);
    }
}

int main() {
    int arr[] = {7, 8, 1, 3, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 3;
    int result = findPosition(arr, n, key);

    if (result != -1) {
        cout << "Element " << key << " found at index " << result << endl;
    } else {
        cout << "Element " << key << " not found in the array." << endl;
    }

    return 0;
}
