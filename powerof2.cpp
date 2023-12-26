

#include <iostream>
#include <cmath>

using namespace std;

void powerof2() {
    int n;
    cout << "Enter the digit: ";
    cin >> n;

    for (int i = 0; i <= 30; i++) {
        int ans = pow(2, i);

        if (ans == n) {
            cout << n << " is a multiple of 2^" << i << endl;
            return; // exit the function after finding the match
        }
    }

    cout << n << " is not a multiple of 2" << endl;
}

int main() {
    powerof2(); // Call the function

    return 0;
}


/*

```plaintext
Procedure powerOf2():
    Integer n
    Output "Enter the digit: "
    Input n

    For i from 0 to 30:
        ans = 2^i

        If ans equals n:
            Output n, " is a multiple of 2^", i
            Return

    Output n, " is not a multiple of 2"

End Procedure

Call powerOf2()
```

Explanation:

- `Procedure powerOf2()` is defined to encapsulate the functionality.
- `Input n` is used to get the user's input.
- The `For` loop iterates from 0 to 30 to check powers of 2.
- `ans` is calculated as 2^i.
- The `If` statement checks if `ans` is equal to `n` and prints the result accordingly.
- The `Return` statement exits the function if a match is found.
- The last line calls the `powerOf2()` procedure to execute the code.

This pseudocode should help you understand the structure and logic of the program without getting into the specific syntax of any programming language.*/
