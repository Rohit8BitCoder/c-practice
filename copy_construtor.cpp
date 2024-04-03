#include <iostream>
using namespace std;

class MyClass {
private:
    int myNumber;
    string myString;

public:
    // Default constructor
    MyClass() {
        myNumber = 0;
        myString = "Default";
    }

    // Parameterized constructor
    MyClass(int num, string str) {
        myNumber = num;
        myString = str;
    }

    // Copy constructor
    MyClass(const MyClass &source) {
        myNumber = source.myNumber;
        myString = source.myString;
    }

    // Function to display data
    void displayData() {
        cout << "My number: " << myNumber << endl;
        cout << "My string: " << myString << endl;
    }
};

int main() {
    // Creating an object of MyClass using parameterized constructor
    MyClass obj1(100, "Hello");

    // Creating another object and initializing it using copy constructor
    MyClass obj2 = obj1;

    // Displaying data of obj1
    cout << "Data of obj1: " << endl;
    obj1.displayData();

    // Displaying data of obj2
    cout << "\nData of obj2 (copied from obj1): " << endl;
    obj2.displayData();

    return 0;
}
