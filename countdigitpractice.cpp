#include<iostream>
using namespace std;

int countdigit(int n) {
    int count = 0;
    while (n != 0) {
        n /= 10;  // Remove the last digit
        count++;
    }
    return count;
}

int main() {
    int k;
    cout << "Enter the number: ";
    cin >> k;
    
    int digitCount = countdigit(k);
    
    cout << "Number of digits: " << digitCount << endl;
    
    return 0;
}
