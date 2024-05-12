// // You are given an array that contains integers. You need to print the elements of the array with in reverse order with a space between them.
// #include<iostream>
// using namespace std;
// int revarray(int n){
//     int num [0];
//     // num[] ={0};
//     for(int i =0; i<n; i--){
//         num []= nim {i};
//     }
//     return num [];
// }
// int main(){
//     int a;
//     cout<<"enter the number";
//     cin>>a;
//     cout<<"the answer is "<<revarray(a);
// }
#include<iostream>
using namespace std;

void revarray(int arr[]) {
    for (int i = 100 - 1; i >= 0; i--) {
        cout << arr[i] << " ";
    }
}

int main() {
    // int 100;
    // cout << "Enter the number of elements in the array: ";
    // cin >> a;

    int num[100];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < 100; i++) {
        cin >> num[i];
    }

    cout << "The reversed array is: ";
    revarray(num);

    return 0;
}
