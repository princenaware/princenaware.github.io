// Write a C++ program to implement a concept of function overloading.
#include <iostream>
#include <string>
using namespace std;
// Function to add two integers
int add(int a, int b) {
    return a + b;
}

// Overloaded function to add three integers
int add(int a, int b, int c) {
    return a + b + c;
}

// Overloaded function to concatenate two strings
string add(const string& str1, const string& str2) {
    return str1 + str2;
}

// Overloaded function to add a double and an integer
double add(double dVal, int iVal) {
    return dVal + iVal;
}

int main() {
    int choice;
    do {
        cout << "\n=== Function Overloading Demo ===" << endl;
        cout << "1. Add two integers" << endl;
        cout << "2. Add three integers" << endl;
        cout << "3. Concatenate two strings" << endl;
        cout << "4. Add double and integer" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice (1-5): ";
        cin >> choice;

        switch(choice) {
            case 1: {
                int a, b;
                cout << "Enter first integer: ";
                cin >> a;
                cout << "Enter second integer: ";
                cin >> b;
                int sum1 = add(a, b);
                cout << "Sum of two integers: " << sum1 << endl;
                break;
            }
            case 2: {
                int a, b, c;
                cout << "Enter first integer: ";
                cin >> a;
                cout << "Enter second integer: ";
                cin >> b;
                cout << "Enter third integer: ";
                cin >> c;
                int sum2 = add(a, b, c);
                cout << "Sum of three integers: " << sum2 << endl;
                break;
            }
            case 3: {
                string str1, str2;
                cin.ignore(); // Clear input buffer
                cout << "Enter first string: ";
                getline(cin, str1);
                cout << "Enter second string: ";
                getline(cin, str2);
                string concatenatedString = add(str1, str2);
                cout << "Concatenated string: " << concatenatedString << endl;
                break;
            }
            case 4: {
                double d;
                int i;
                cout << "Enter double value: ";
                cin >> d;
                cout << "Enter integer value: ";
                cin >> i;
                double mixedSum = add(d, i);
                cout << "Sum of double and integer: " << mixedSum << endl;
                break;
            }
            case 5:
                cout << "Thank you for using the program!" << endl;
                break;
            default:
                cout << "Invalid choice! Please try again." << endl;
        }
    } while (choice != 5);

    return 0;
}