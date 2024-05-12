#include<iostream>
using namespace std;
// void printcol(int arr[][4], int row,int col){ // prdint element column wise
//     for(int j=0;j<col;j++)
//     for(int i =0;i<row; i++)
// cout<<arr[i][j]<<endl<<" ";
// }
int main(){
    // print all element in the row wise
    // int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
//     for(int row=0;row<3;row++)
//     for(int col =0;col<4;col++)
// cout<<arr[row][col]<<endl<<" ";
// printcol(arr,3,4);
// int x=1 7;
// for(int row=0;row<3;row++)
//     for(int col =0;col<4;col++){
// if(arr[row][col]==x){
//     cout<<"yes";
//     return 0;
// }
// }
//     cout<<"no";
// }
// addition of two matrix
int arr1[3][4] = {1,2,3,4,5,6,7,8,9,10};
int arr2[3][4] = {1,2,3,4,5,6,7,8,9,10};
int ans[3][4];
for(int row=0;row<3;row++)
for(int col =0;col<4;col++){
    ans[row][col]= arr1[row][col] + arr2[row][col];
    cout<<ans[row][col]<<" "; 
}
}
