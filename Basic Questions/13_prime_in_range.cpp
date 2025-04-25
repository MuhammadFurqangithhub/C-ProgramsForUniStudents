// Print prime numbers in range
#include <iostream>
using namespace std;

bool isPrime(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0) return false;
    return true;
}

int main() {
    int low, high;
    cout << "Enter low range: ";
    cin >> low;
    cout << "Enter high range: ";
    cin >> high;
    for (int i = low; i <= high; i++)
        if (isPrime(i)) cout << i << " ";
    return 0;
}