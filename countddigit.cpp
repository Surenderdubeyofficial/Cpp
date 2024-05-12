#include<iostream>
using namespace std;

int countDigits(int N) {
    int count = 0;

    // Keep dividing by 10 until N becomes less than 10
    while (N >= 10) {
        N = N / 10;
        count++;
    }

    // Add 1 to count the last remaining digit
    count++;

    return count;
}

int main() {
    int N;
    cout << "Enter a natural number: ";
    cin >> N;

    int digitCount = countDigits(N);

    cout << "Number of digits in " << N << ": " << digitCount;

    return 0;
}
