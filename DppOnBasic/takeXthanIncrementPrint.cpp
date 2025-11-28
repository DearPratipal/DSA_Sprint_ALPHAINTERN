// Write a program to take an integer x as input and print the result of ++x, x++, and the final value of x.
#include <iostream>
using namespace std;

int main() {
    int x;
    cout << "Enter an integer: ";
    cin >> x;

    cout << "Value after ++x: " << ++x << endl; // Pre-increment
    cout << "Value after x++: " << x++ << endl; // Post-inctreament
    cout << "Final value of x: " << x << endl;  // Final value
    return 0;
}