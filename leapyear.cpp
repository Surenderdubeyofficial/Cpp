#include<iostream>
using namespace std;
void leapyear(int n){
if(n % 4 ==0){
    cout<<"leapyear";
}
else {
   cout<< "not leapyear";
}
}
int main(){
    int n;
    cout<<"enter year ";
    cin>>n;
   leapyear(n); 
}
