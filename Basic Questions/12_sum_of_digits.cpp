// Sum of digits using recursion
#include <iostream>
using namespace std;

int sumDigits(int n) {
    return n == 0 ? 0 : n % 10 + sumDigits(n / 10);
}

int main() {
    int n;
    cout << "Enter number: ";
    cin >> n;
    cout << "Sum of digits: " << sumDigits(n);
    return 0;
}