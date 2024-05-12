#include<iostream>
#include<climits>  // Include this header for INT_MAX and INT_MIN
using namespace std;

void arrmaxmin(int arr[], int size) {
    int ans_min = INT_MAX;
    int ans_max = INT_MIN;

    for (int i = 0; i < size; i++) {
        if (arr[i] < ans_min) {
            ans_min = arr[i];
        }

        if (arr[i] > ans_max) {
            ans_max = arr[i];
        }
    }

    cout << "The min number of the array is: " << ans_min << endl;
    cout << "The max number of the array is: " << ans_max << endl;
}

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[size];
    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    arrmaxmin(arr, size);

    return 0;
}
