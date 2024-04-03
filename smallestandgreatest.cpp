#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " numbers:\n";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    // Initializing smallest and greatest with the first element of the array
    int smallest = arr[0];
    int greatest = arr[0];

    // Finding smallest and greatest numbers
    for (int i = 1; i < n; ++i) {
        if (arr[i] < smallest)
            smallest = arr[i];
        else if (arr[i] > greatest)
            greatest = arr[i];
    }

    cout << "The smallest number in the array is: " << smallest << endl;
    cout << "The greatest number in the array is: " << greatest << endl;

    return 0;
}
