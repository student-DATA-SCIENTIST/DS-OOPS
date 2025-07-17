#include <iostream>
using namespace std;

int x = 100;  // Global variable

void showScope() {
    int x = 50;  // Function scope
    {
        int x = 10;  // Block scope
        cout << "Block scope x: " << x << endl;
    }
    cout << "Function scope x: " << x << endl;
}

int main() {
    showScope();
    cout << "Global scope x: " << x << endl;
    return 0;
}
