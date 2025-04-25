// Count set bits using Brian Kernighan’s algorithm
#include <iostream>
using namespace std;

int countSetBits(int n) {
    int count = 0;
    while (n) {
        n &= (n - 1);
        count++;
    }
    return count;
}

int main() {
    int n;
    cout << "Enter number: ";
    cin >> n;
    cout << "Set bits: " << countSetBits(n);
    return 0;
}