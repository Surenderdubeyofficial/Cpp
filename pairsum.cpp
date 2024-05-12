#include<iostream>
using namespace std;

int pairsum(int arr[], int n, int target) {
    int start = 0, end = n - 1, ans = -1;
    
    while(start < end) {
        int currentSum = arr[start] + arr[end];
        if(currentSum == target) {
            ans = currentSum;
            cout<<arr[start]<<arr[end]<<" ";
            break;
        } else if(currentSum < target) {
            start++;
        } else {
            end--;
        }
    }
    return ans;
}

int main() {
    int arr[1000];
    int n;

    cout << "Enter the size: ";
    cin >> n;

    cout << "Enter the elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int target;
    cout << "Enter the target number: ";
    cin >> target;

    cout<<endl << "Pair sum of two numbers of the array is " << pairsum(arr, n, target);

    return 0;
}
