#include <iostream>
#include <cctype> // For isalpha function

using namespace std;

string letterToNumber(const string& inputString) {
    string result = "";
    int position = 1; // Initialize the position counter
    
    for (char c : inputString) {
        if (isalpha(c)) {
            c = tolower(c); // Convert to lowercase to handle both upper and lower case letters
            int number = c - 'a' + 1;
            result += c; // Append the letter
            result += to_string(number); // Append the letter's position
            position++; // Increment the position counter
        } else {
            result += c; // If it's not a letter, keep it unchanged
        }
    }
    return result;
}

int main() {
    string inputText;
    cout << "Enter a string: ";
    cin >> inputText;
    cin.ignore(); // Clear any remaining newline characters from the input buffer
    
    string numberForm = letterToNumber(inputText);
    cout << "Letter and Position form: " << numberForm << endl;

    return 0;
}

