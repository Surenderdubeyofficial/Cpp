#include<iostream>
#include<cmath>
using namespace std;
int r(int n, int p){
    int answer = pow(n,p);
    return answer;
}
int main(){
    int n,p;
    cout<<"enter n and p"<<endl;
    cin>>n>>p;
    int  answer = r(n,p);
    cout<<"power of no. is "<<answer;
    return 0;


}

