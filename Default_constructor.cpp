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

    // Function to set data
    void getData(int num, string str) {
        myNumber = num;
        myString = str;
    }

    // Function to display data
    void putData() {
        cout << "My number: " << myNumber << endl;
        cout << "My string: " << myString << endl;
    }
};

int main() {
    // Creating an object of MyClass
    MyClass obj;

    // Calling putData() before setting data
    cout << "Before setting data: " << endl;
    obj.putData();

    // Setting data using getData()
    obj.getData(100, "Hello");

    // Calling putData() after setting data
    cout << "\nAfter setting data: " << endl;
    obj.putData();

    return 0;
}
