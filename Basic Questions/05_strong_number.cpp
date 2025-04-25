// Check if a number is a Strong number
#include <iostream>
using namespace std;

int factorial(int n) {
    return (n == 0 || n == 1) ? 1 : n * factorial(n - 1);
}

int main() {
    int num, sum = 0, temp;
    cout << "Enter a number: ";
    cin >> num;
    temp = num;
    while (temp) {
        sum += factorial(temp % 10);
        temp /= 10;
    }
    cout << (sum == num ? "Strong Number" : "Not Strong");
    return 0;
}