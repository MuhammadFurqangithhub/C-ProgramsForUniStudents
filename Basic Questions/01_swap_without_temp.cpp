// Swap two numbers without using a third variable (bitwise XOR)
#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter First number you want to swap: ";
    cin >> a;
    cout << "Enter Second number you want to swap: ";
    cin >> b;
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    cout << "After swap: a = " << a << ", b = " << b;
    return 0;
}