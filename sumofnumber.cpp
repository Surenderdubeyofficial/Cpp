#include<iostream>
using namespace std;

int sum(int a, int b) {
    return a + b;
}

int main() {
    int t;

    cout << "Enter the number of times you want to add: ";
    cin >> t;

    for (int i = 0; i < t; i++) {
        int m, n;
        cout << "Enter two numbers you want to add: ";
        cin >> m >> n;
        cout << "Sum is: " << sum(m, n) << endl;
        
    }

    return 0;
}
