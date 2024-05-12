#include<iostream>
using namespace std;
int main()
{
    // variable ke liya heapm memory allocate karo
    int *ptr = new int ; // new use to store heap
    *ptr = 5; // value assign
    cout<<*ptr<<endl;

    float *ptr2 = new float;
    *ptr2 = 3.6;
    cout<<*ptr2<<endl;

    int n;
    cout<<"Enter the size of array";
    cin>>n;

    int*p = new int[n];
    // value dale
    for(int i=0;i<n;i++)
    p[i]=i+1;
   // print karo do

for(int i=0;i<n;i++)
cout<<p[i]<<endl;

// delete keyword use  for heap
delete ptr;
delete ptr2;
delete p;
}