// Convert binary to decimal
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    long long bin;
    int dec = 0, i = 0;
    cout << "Enter a binary number: ";
    cin >> bin;
    while (bin) {
        dec += (bin % 10) * pow(2, i++);
        bin /= 10;
    }
    cout << "Decimal: " << dec;
    return 0;
}