#include<iostream>
#include<climits>
using namespace std;
void maxmin(int n ,int arr[])
{
    int max = INT_MIN;
    int min = INT_MAX;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>max)
        {
           max= arr[i];
        }
        if(arr[i]<min)
        {
           min = arr[i];
        }
    }
     cout<<"the max no. is"<<max<<endl;
      cout<<"the no min is "<<min<<endl;
}
int main()
{
    int arr[1000];
    int size;
    cout<<"enter the size ";
    cin>>size;
    cout<<"enter the numbers";
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    maxmin(size,arr);

 return 0;
}