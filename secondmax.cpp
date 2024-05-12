#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[] = {12,3,4,5,77,80,100};
    int ans = INT_MIN;
    for(int i=0;i<=8;i++){
        if(arr[i]>ans){
            ans = arr[i];
        }
    }
    int second = INT_MIN;
    for(int i =0; i<=8;i++){
        if(ans!=arr[i]){
            second = max(second,arr[i]);
        }
    }
    cout<<second;
}