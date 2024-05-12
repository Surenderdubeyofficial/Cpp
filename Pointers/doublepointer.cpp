#include<iostream>
using namespace std;
void fun (int **p1)
{
    *p1 = *p1+1;
}
int main()
{
    int n =10;
    int *p =&n; // single pointer
    int **p2 =&p; // double pointer
    fun(p2);
    cout<<p;
}