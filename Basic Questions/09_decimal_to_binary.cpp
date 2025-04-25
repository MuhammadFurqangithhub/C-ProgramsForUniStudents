// Convert decimal to binary without arrays
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter decimal number: ";
    cin >> n;
    long long bin = 0, place = 1;
    while (n) {
        bin += (n % 2) * place;
        n /= 2;
        place *= 10;
    }
    cout << "Binary: " << bin;
    return 0;
}