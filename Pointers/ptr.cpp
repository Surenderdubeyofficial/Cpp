#include<iostream>
using namespace std;
int swapping (int *ptr1,int*ptr2) // swapping of the three number 
// Pass by Pointer
{
    int temp = *ptr1;
    *ptr1= *ptr2;
    *ptr2 = temp;
    cout<<*ptr1<<endl;
    cout<<*ptr2;
}

int main(){
    int first =10;
    int second =20;
    swapping(&first,&second);
// Pointers
// int a=10;
// int *ptr =&a;
// cout<<ptr<<endl; // adress value
// cout<<*ptr<<endl; // value address
// int b=20;
// ptr = &b;
// cout<<ptr<<endl;
// cout<<*ptr<<endl;

// // Arrays with pointer 
//  int arr[5] ={1,2,3,4,5};
// for(int i=0; i<5;i++)
// {
//     cout<<arr[0];
// }
}
