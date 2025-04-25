// Armstrong number checker (for any number of digits)
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num, sum = 0, temp, n = 0;
    cout << "Enter a number: ";
    cin >> num;
    temp = num;

    while (temp) {
        temp /= 10;
        n++;
    }

    temp = num;
    while (temp) {
        int digit = temp % 10;
        sum += pow(digit, n);
        temp /= 10;
    }

    cout << (sum == num ? "Armstrong Number" : "Not Armstrong");
    return 0;
}