#include<iostream>
using namespace std;
int main(){
int arr[] ={1,2,3,4,5};
int index = -1;
int x =5;
for(int i =0;i<=4; i++){
    if(arr[i]==x){
       index = i;
       break;
    }
    else{
        index =-1;
    }
}
cout<<index;

}
