// Convert number to words (0-999)
#include <iostream>
using namespace std;

string ones[] = {"", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
string teens[] = {"Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", 
                  "Sixteen", "Seventeen", "Eighteen", "Nineteen"};
string tens[] = {"", "", "Twenty", "Thirty", "Forty", "Fifty", 
                 "Sixty", "Seventy", "Eighty", "Ninety"};

string convert(int n) {
    string result = "";
    if (n >= 100) {
        result += ones[n / 100] + " Hundred ";
        n %= 100;
    }
    if (n >= 10 && n < 20)
        result += teens[n - 10];
    else {
        result += tens[n / 10] + " " + ones[n % 10];
    }
    return result.empty() ? "Zero" : result;
}

int main() {
    int n;
    cout << "Enter number (0-999): ";
    cin >> n;
    cout << convert(n);
    return 0;
}