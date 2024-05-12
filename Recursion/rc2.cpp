#include<iostream>
using namespace std;
// int fact(int n)
// {
//     if(n==1||0){
//         return 1;
//     }
//     return n*fact(n-1); 
// }
// int main()
// {
//     int n =6;
//     if(n<0){
//         cout<<"factorial is not possible";
//         return 0;
//     }
//     cout<<fact(n);
// }

//sum of n number
// int sum(int n)
// {
//     if(n==1){
//         return 1;
//     }
//     return n+sum(n-1);
// }
// int main(){
//     int n=10;
//     cout<<sum(n);
// }

// sqare of no.
//  int pow(int num,int n)
// {
//     if(n==0){
//         return 1;
//     }
//     if(n==1)
//     {
//         return num;
//     }
//     return num*pow(num,n-1);
// }
// int main(){
//     int n=10;
//      cout<<pow(2,n);
// }
 int sqsum(int n)   
{
    if(n==0){
        return 0;
    }
    if(n==1)
    {
        return 1;
    }
    return n*n+sqsum(n-1);
}
int main(){
    int n=10;
     cout<<sqsum(n);
}