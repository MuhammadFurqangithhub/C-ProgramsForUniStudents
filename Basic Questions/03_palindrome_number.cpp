// Check if a number is palindrome
#include <iostream>
using namespace std;

int main() {
    int num, rev = 0, temp;
    cout << "Enter a number: ";
    cin >> num;
    temp = num;
    while (temp != 0) {
        rev = rev * 10 + temp % 10;
        temp /= 10;
    }
    cout << (rev == num ? "Palindrome" : "Not Palindrome");
    return 0;
}