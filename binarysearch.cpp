#include<iostream>
using namespace std;
int binarysearch(int arr[],int n, int key ){

    int start =0;
    int end = n-1;
    int mid ;
    while(start<=end){
        mid = (start+end)/2;
        if( arr[mid] == key)
            return mid;
        else if(arr[mid]<key)
            start = mid+1;
        else
        end= mid-1;
    }
        return -1;
    }

int main(){
    int arr [1000];
    int n;
    cout<<"enter the size ";
    cin>>n;
    cout<<"enter the elements";
    for(int i=0;i<n;i++)
        cin>>arr[i];
    
        int key;
    cout<<"enter no. which you want to search";
    cin>>key;
    cout<<binarysearch(arr,n,key);
}
// for the decreasing order or descending order
// #include<iostream>
// using namespace std;
// int binarysearch(int arr[],int n, int key ){

//     int start =n-1;
//     int end = 0;
//     int mid ;
//     while(start>end){
//         mid = (start+end)/2;
//         if( arr[mid] == key)
//             return mid;
//         else if(arr[mid]<key)
//             start = mid+1;
//         else
//         end= mid-1;
//     }
//         return -1;
//     }
// int main(){
//     int arr [1000];
//     int n;
//     cout<<"enter the size ";
//     cin>>n;
//     cout<<"enter the elements";
//     for(int i=0;i<n;i++)
//         cin>>arr[i];
    
//         int key;
//     cout<<"enter no. which you want to search";
//     cin>>key;
//     cout<<binarysearch(arr,n,key);
// }