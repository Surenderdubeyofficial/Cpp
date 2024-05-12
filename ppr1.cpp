#include<iostream>
using namespace std;
 int table(int n){

        for(int i=0;i<10; i++) {
            cout<<endl<<i*n;
        }
}
int main() {

    int k;
    cout<<"enter the no. for table which you want";
    cin>>k;
    cout<<table(k);
    return 0;



}

