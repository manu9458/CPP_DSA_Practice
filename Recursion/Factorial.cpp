//
// Created by Manu on 6/7/2025.
//

#include <iostream>
using namespace std;

// Function to calculate factorial of a number recursively.
// The base case is for n = 0 or n = 1, where the factorial is 1.
// For other values, recursively multiplies `n` by `factorial(n-1)`.
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;  // Base case: factorial of 0 or 1 is 1.
    }
    return n * factorial(n - 1);  // Recursive case: n * (n-1)!
}

int main() {
    int n;
    cin>>n;
    cout<<"Factorial is:"<<factorial(n);
}
