#include<iostream>
#include<vector>
using namespace std;
int swapbyref(int &ptr1,int &ptr2)
{
    int temp = ptr1;
    ptr1=ptr2;
    ptr2 = temp;
}
void Pass(vector<int>&temp){
    for(int i=0; i<5;i++)
        temp[i]= 20;
    
}
// vector,string ko refrence karna chayia &
// array ko pointer se karna chayia 
int main()
{
    int first=10, second =20;
    swapbyref(first,second);
    cout<<first<<endl;
    cout<<second<<endl;
    vector<int>v(5,0);
    Pass(v);
    for(int i=0;i<5;i++)
        cout<<v[i];
    

    
}
