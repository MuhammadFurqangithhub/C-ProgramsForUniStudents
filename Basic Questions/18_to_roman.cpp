// Convert integer to Roman numerals
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number (1-3999): ";
    cin >> n;
    string val[] = {"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
    int num[] = {1000,900,500,400,100,90,50,40,10,9,5,4,1};
    string roman = "";
    for (int i = 0; i < 13; ++i) {
        while (n >= num[i]) {
            roman += val[i];
            n -= num[i];
        }
    }
    cout << "Roman: " << roman;
    return 0;
}