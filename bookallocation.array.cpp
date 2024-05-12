// #include<iostream>
// using namespace srd;
// int bookallocation(int arr[]){
//     int start = 90, end =203, mid, ans ,page, count ;
//     while(start<=end){
//         page=0;
//         count =1;
//         for(int i=0;i<=n;i++){
//             page +=arr[i];
//             if(page>arr[mid]){
//                 page = arr[mid];
//                 start = mid+1;
//                 if(count<arr[mid]){
//                     ans = mid;
//                     end = mid01;

//                 }
//                 else
//                 start = mid+1;
//             }
//             cout<<ans;
//         }
//     }


// }
// int main() {
//     int arr[1000];
//     int n;
//     cout << "Enter the size: ";
//     cin >> n;
//     cout << "Enter the elements: ";
//     for (int i = 0; i < n; i++)
//         cin >> arr[i];
// }

//     cout<< binarysearch(arr);
//     return 0;
// }
#include <iostream>
using namespace std;

bool isAllocationPossible(int arr[], int n, int m, int mid) {
    int students = 1;
    int pagesRead = 0;
    for (int i = 0; i < n; i++) {
        if (pagesRead + arr[i] > mid) {
            students++;
            pagesRead = arr[i];
            if (students > m) {
                return false;
            }
        } else {
            pagesRead += arr[i];
        }
    }
    return true;
}

int bookAllocation(int arr[], int n, int m) {
    int start = 0, end = 0, result = -1;
    for (int i = 0; i < n; i++) {
        end += arr[i];
        if (arr[i] > start) {
            start = arr[i];
        }
    }

    while (start <= end) {
        int mid = start + (end - start) / 2;
        if (isAllocationPossible(arr, n, m, mid)) {
            result = mid;
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }
    return result;
}

int main() {
    int arr[1000];
    int n, m;
    cout << "Enter the number of books: ";
    cin >> n;
    cout << "Enter the number of students: ";
    cin >> m;
    cout << "Enter the number of pages in each book: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout << "Minimum number of pages each student should read: " << bookAllocation(arr, n, m) << endl;
    return 0;
}
