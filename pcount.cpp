#include<iostream>
using namespace std;

int countd(int n) {
    int count = 0;

    while (n >= 10) {
        n = n / 10;
        count++;
    }
    count++;
    return count;
}

int main() {
    int i;
    
    cout << "Enter how many times you want to run the program: ";
    cin >> i;

    for (int k = 0; k < i; k++) {
        int num; // Declare a variable to store the number
        cout << "Enter the number: ";
        cin >> num;
        cout << "The answer is: " << countd(num) << endl;
    }

    return 0;
}
