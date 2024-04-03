#include <iostream>
using namespace std;

int main() {
    string str;

    // Input string
    cout << "Enter a lowercase string: ";
    cin >> str;

    // Convert lowercase to uppercase
    for (int i = 0; i < str.length(); ++i) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            // If character is lowercase, convert to uppercase by subtracting 32
            str[i] -= 32;
        }
    }

    // Output converted string
    cout << "Uppercase string: " << str << endl;

    return 0;
}
