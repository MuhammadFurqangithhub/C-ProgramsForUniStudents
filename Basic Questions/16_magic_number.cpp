// Check if a number is magic number (recursive sum of digits = 1)
#include <iostream>
using namespace std;

int digitSum(int n) {
    return n < 10 ? n : digitSum(n / 10 + n % 10);
}

int main() {
    int n;
    cout << "Enter number: ";
    cin >> n;
    cout << (digitSum(n) == 1 ? "Magic Number" : "Not Magic");
    return 0;
}