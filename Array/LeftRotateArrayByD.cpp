// Created by Manu on 5/24/2025
//
#include <iostream>
using namespace std;

// Function to reverse elements in arr from index start to end
void reverseArraySegment(int arr[], int start, int end) {
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

// Function to rotate array left by d positions
void rotateArray(int arr[], int n, int d) {
    if (n == 0 || d == 0) return;
    d = d % n; // Handle case where d > n
    if (d < 0) d = d + n; // Handle negative d
    // Reverse first d elements
    reverseArraySegment(arr, 0, d - 1);
    // Reverse remaining n-d elements
    reverseArraySegment(arr, d, n - 1);
    // Reverse entire array
    reverseArraySegment(arr, 0, n - 1);
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int d = 3;
    rotateArray(arr, n, d);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}