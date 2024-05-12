#include<iostream>
using namespace std;
// void printarr(int arr[],int index, int n)
// {
//     if(index==n){
//         return;
//     }
//     cout<<arr[index]<<"";
//      printarr(arr,index+1,n);
// }
// int main()
// {
//     int arr[] = {1,2,3,4,5};
//     printarr( arr,0,5);
// } 
// sum of no. of array
// int sum(int arr[],int index,int n)
// {
//     if(index==n)
//     return 0;
// return arr[index]+sum(arr,index+1,n);
// }
// int main()
// {
//     int arr[] ={3,4,1,2,8};
//     cout<<sum(arr,0,5)<<endl;
// }
int minelement(int arr[],int index, int n)
{
    if(index==n-1)
    {
        return arr[index];
    }
    return min(arr[index],minelement(arr,index+1,n));
}
int main()
{
    int arr[]={3,4,6,4,7,8};
   cout<< minelement(arr,0,6);
}