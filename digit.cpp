#include<iostream>
#include<cmath>
using namespace std;

int firstDigit(int n) {
    while (n >= 10) {
        n = n / 10;
    }
    return n;
}

int main() {
    int n;
    cout << "Enter number: ";
    cin >> n;

    int result = firstDigit(n);
    cout << "First digit: " << result;

    return 0;
}
