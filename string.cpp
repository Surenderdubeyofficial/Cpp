#include<iostream>
using namespace std;
int str (string a ,string b){
    string x = a + " " + b ; // "" use for the space
    cout<<"your answer is\n "<<x;
}
int main(){
     string x;
     cout<<"enter x\n";
     cin>>x;
      string  y;
     cout<<"enter y\n";
     cin>>y;
     str(x,y);

    string a = "surenderdubey";
    cout<<"your length is\n"<<x.length(); // here we can use of size()
}
