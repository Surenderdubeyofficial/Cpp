#include<iostream>
#include<vector>
#include<string>
using namespace std;
void parenth(int n,int left,int right, vector<string>&ans,string &temp )
{
    if(left+right==2*n)
    {
        ans.push_back(temp);
        return;
    }
    if(left<n)
    {
        temp.push_back('(');
        parenth(n,left+1,right,ans,temp);
        temp.pop_back();
    }
     if(right<left)
    {
        temp.push_back(')');
        parenth(n,left,right+1,ans,temp);
        temp.pop_back();
    }

}
int main()
{
    int n = 3;
    vector<string> ans;
    string temp;
    parenth(n,0,0,ans, temp);  
    
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<endl;
    }
    return 0;
}   