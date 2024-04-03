#include <iostream>
using namespace std;

void fibonacci(int n) {
    int first = 0, second = 1;
    int next;

    cout << "Fibonacci Series up to " << n << " terms: ";
    
    for (int i = 1; i <= n; ++i) {
        cout << first << " ";
        next = first + second;
        first = second;
        second = next;
    }
    cout << endl;
}

int main() {
    int range;
    cout << "Enter the range for Fibonacci Series: ";
    cin >> range;
    
    fibonacci(range);
    
    return 0;
}
