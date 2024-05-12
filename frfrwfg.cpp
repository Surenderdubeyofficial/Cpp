#include<iostream>
using namespace std;
int trading(int t, int r){

    int calc = t-r;
    int finalamt = calc%2;
    return finalamt;
}

int main(){
    int h;
    cout<<"enter total amount avilavle in amount";
    cin>>h;
    int k;
    cout<<"enter total rechare amount";
    cin>>k;
    cout<<"the amount which you can get"<<trading(h,k);
    return 0;


}