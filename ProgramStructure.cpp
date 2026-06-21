// Documentation Section
/* Program to add two numbers */

// Linking Section
#include <iostream>
using namespace std;

// Global Declaration Section
int a = 10, b = 20;

// Function Section
int add(int x, int y)
{
    return x + y;
}

// Main Function
int main()
{
    int result;

    result = add(a, b);

    cout << "Sum = " << result;

    return 0;
}