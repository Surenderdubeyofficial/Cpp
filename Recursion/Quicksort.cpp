#include<iostream>
using namespace std;
int partition(int arr[], int start,int end)
{
    int pos = start;
    for(int i=start;i<=end;i++)
    {
        if(arr[i]<=arr[end]){
            swap(arr[i],arr[pos]);
            pos++;
        }
    }
    return pos-1;
}
void quicksort(int arr[],int start,int end)
{
    if(start>=end)
    return;
int piovat= partition(arr,start,end);
// left side
quicksort(arr,start,piovat-1);
// Right side
quicksort(arr,piovat,end);
}

int main()
{
    int arr[]={10,7,8,9,3,5,3,1,4,2,11,9};
    quicksort(arr,0,11); 
    for(int i=0;i<=10;i++){
    cout<<arr[i]<<" ";
    }
}