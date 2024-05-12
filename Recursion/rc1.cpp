#include<iostream>
using namespace std;

// for even no.
// void fun(int n)
// {
//     if(n==2){
//         cout<<2;
//         return;
//     }
//     cout<<n;
//     fun(n-2);
// }
// int main()
// {
//     int n=8;
//     fun(n);
// }
// for 1 to n no.
// void fun(int num, int N)
// {
//     if(num==N){
//         cout<<num;
//         return;
//     }
//     cout<<num;
//     fun(num+1,N);
// }
// int main()
// {
//     int n=5;
//     fun(1,n);
// }
// void fun(int num)
// {
//     if(num==1){
//         cout<<num;
//         return;
//     }
//     fun(num-1); // ascending order
//     cout<<num;
//    // fun(num-1); // decending order
// }
// int main()
// {
//     int n=5;
//     fun(n);
// }
// for even no.
void even(int n)
{
    if(n==2){
        cout<<n<<endl;
        return;
    }
    even(n-2);
    cout<<n<<endl;
}
int main()
{
    int n =20;
    if(n%2==1)
    n--;
even(n);
}