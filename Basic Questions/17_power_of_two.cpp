// Check if number is power of 2 using bitwise
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number: ";
    cin >> n;
    cout << ((n > 0 && (n & (n - 1)) == 0) ? "Power of Two" : "Not Power of Two");
    return 0;
}