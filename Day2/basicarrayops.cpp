#include <iostream>
using namespace std;

int main() {
    int arr[5] = {10, 20, 30, 40, 50};

    // Access and modify
    arr[2] = 35;

    int sum = 0;
    for(int i = 0; i < 5; i++) {
        sum += arr[i];
    }

    float avg = sum / 5.0;

    cout << "Sum: " << sum << "\nAverage: " << avg << endl;

    return 0;
}
