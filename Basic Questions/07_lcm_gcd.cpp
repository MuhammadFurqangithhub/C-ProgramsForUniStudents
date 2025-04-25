// LCM and GCD using Euclidean algorithm
#include <iostream>
using namespace std;

int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}

int main() {
    int a, b;
    cout << "Enter first numbers: ";
    cin >> a;
    cout << "Enter second numbers: ";
    cin >> b;
    int g = gcd(a, b);
    int lcm = (a * b) / g;
    cout << "GCD: " << g << "\nLCM: " << lcm;
    return 0;
}