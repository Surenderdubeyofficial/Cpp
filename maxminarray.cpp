#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr [] ={19,425,36,74,88,689};
    int min = INT_MAX;
    int max = INT_MIN;
    for(int i=0;i<=5;i++){
        if(arr[i]<min){
        min = arr[i];
       
        }
         if(arr[i]>max){
            max = arr[i];
        }
        
    }
    cout<<"minimum no.is "<<min<<endl;
    cout<<"max no. is"<<max;

}