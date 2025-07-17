#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    
    if (num % 2 == 0)
        cout << "Even\n";
    else
        cout << "Odd\n";

   
    if (num > 0)
        cout << "Positive\n";
    else if (num < 0)
        cout << "Negative\n";
    else
        cout << "Zero\n";

    if (num >= -9 && num <= 9)
        cout << "Single Digit";
    else if (num >= -99 && num <= 99)
        cout << "Double Digit";
    else
        cout << "More than Two Digits";

    return 0;
}
