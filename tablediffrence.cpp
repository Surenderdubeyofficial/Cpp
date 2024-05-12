#include<iostream>
using namespace std;

int tableDifference(int m, int n) {
    int dif = m - n;
    int k = 1;

    for(int i = 1; i <=10; i++) {
        k = i * dif;
        // If you want to see intermediate values, you can uncomment the following line:
        // cout << "Intermediate k: " << k << endl;
    

    return k;
}

int main() {
    int m, n;
    cout << "Enter m and n: ";
    cin >> m >> n;
    cout << tableDifference(m, n) << endl;

    return 0;
}
