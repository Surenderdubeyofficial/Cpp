#include<iostream>
using namespace std;
int function(int n){
    if(n<=5)(
        cout<<"number is less than 5";
    )
    else{
        cout<<"no is greater than 5";
    }
}
int main(){
    int k;
    cout<<"enter no. for testing";
    cin>>k;
    cout<<function(k);
}