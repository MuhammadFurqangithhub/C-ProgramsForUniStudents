// Perfect number checker
#include <iostream>
using namespace std;

int main() {
    int num, sum = 0;
    cout << "Enter a number: ";
    cin >> num;
    for (int i = 1; i <= num / 2; ++i)
        if (num % i == 0) sum += i;
    cout << (sum == num ? "Perfect Number" : "Not Perfect");
    return 0;
}