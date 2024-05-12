#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    v = {10,28,30,40,50};
    v.push_back(80); // insert value in array
    v.pop_back();
    cout<<v.size()<<endl;
    // for(int i =0;i<v.size();i++){ 
    //     cout<<i<<" "<<endl;
    // }
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    //  for(auto it =v.begin();it!=v.end();it++){ //for printing the the array  
    //     cout<<*it<<" ";
    // }
    //  for(auto it =v.rbegin();it!=v.rend();it++){ //printing reverse array
    //     cout<<endl<<*it<<" ";
    // }
    // for sorting increasing order
    // sort(b.begin(),v.end());

}