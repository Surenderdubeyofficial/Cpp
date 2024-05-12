#include<iostream>
using namespace std;
int sumno(int n ){
    int sum[n];
    for(int i=0; i<n; i++){
        cin>>sum[i];
    }
       int  m = sum[0];
        for(int i=1; i<n ; i++){
            m = m + sum[i];
        }
        // cout<<m;
        return m;
}
int main() {
    int n;
    cout<<"enter the element";
    cin>>n;
    cout<<"answer is "<<sumno(n);
    
    }
    

