#include<iostream>
#include<cmath> // Include the cmath library for pow function
using namespace std;

 int  r() { 
    int n, p; 
    cout << "Enter number and its power: ";
    cin >> n >> p;
    
    int answer = pow(n, p); 
    cout << "Answer is: " << answer << endl; 
    return 0;
}
int main(){
    int k =1 ;
    for(int i=1;i<5;i++){
        int answer = r();  
        k = k*answer;
}
cout<<k;
return 0;
}

