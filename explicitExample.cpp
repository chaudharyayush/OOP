#include <iostream>
using namespace std;

int main() {
    int a = 15;
    int b = 2;

    // Integer division
    double result1 = a / b;
    cout << "Without Type Casting: " << result1 << endl;

    // Old C-style cast
    double result2 = (double)a / b;
    cout << "C-Style Cast: " << result2 << endl;

    // Modern C++ cast
    double result3 = static_cast<double>(a) / b;
    cout << "static_cast: " << result3 << endl;

    return 0;
}
