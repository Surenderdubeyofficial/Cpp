
#include <iostream>

using namespace std;

int main() {
    // Number of elements
    int n;

    cout << "Enter the number of elements: ";
    cin >> n;

    // Array to store the numbers
    int numbers[n];

    // Input numbers
    cout << "Enter " << n << " numbers:\n";
    for (int i = 0; i < n; ++i) {
        cin >> numbers[i];
    } 

    // Find the maximum
    int max = numbers[0]; // Assume the first number is the maximum

    for (int g = 1; g < n; ++g) {
        if (numbers[g] > max) {
            max = numbers[g];
        }
    }

    // Print the maximum
    cout << "The maximum number is: " << max << endl;

    return 0;
}
