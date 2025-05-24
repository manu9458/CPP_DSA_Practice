// Header file creation information
// Created by Manu on 5/24/2025.
//

// Include the input/output stream library
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// Function to move all zeros to the end of the array while maintaining relative order of non-zero elements
void moveZeroToEnd(int arr[], int n) {
    // Initialize counter for non-zero elements
    int res = 0;
    // Iterate through the array
    for (int i=0;i<n;i++) {
        // If current element is non-zero
        if (arr[i]!=0) {
            // Swap current element with element at res position
            swap(arr[i], arr[res]);
            // Increment the position for next non-zero element
            res++;
        }
    }
}

// Main function - entry point of the program
int main() {
    int arr[] = {0, 1, 0, 3, 12};
    int n = sizeof(arr) / sizeof(arr[0]);
    moveZeroToEnd(arr, n);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}