#include <iostream>
using namespace std;

int main() {
    int nativeNum = 10;
    double decimalNum = 5.5;
    
    // The compiler automatically converts 'nativeNum' to a double (10.0) 
    // before adding it to 5.5
    double result = nativeNum + decimalNum; 
    
    cout << "Result: " << result << endl; // Outputs 15.5
    return 0;
}
