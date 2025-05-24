//
// Created by Manu on 5/24/2025.
//
#include<iostream>
#include <unordered_map>
using namespace std;
//Using unordered_map to store element-frequency pairs
void frequencies(int arr[], int n) {
    // Create an unordered_map to store element-frequency pairs
    unordered_map<int, int> freq;
    // Iterate through each element of the array
    for (int i = 0;i<n;i++) {
        // Increment the frequency count for current element
        // If element is not in map, it's automatically initialized to 0 then incremented
        freq[arr[i]]++;
    }
    // Iterate through each key-value pair in the frequency map
    for (auto it: freq) {
        // Print element (it.first) and its frequency (it.second) followed by newline
        cout<<it.first<<" "<<it.second<<endl;
    }
}
//Without using unordered_map
void Frequencies(int arr[], int n) {
    // Handle empty array
    if (n == 0) return;

    int i = 0; // Start from the first element
    while (i < n) {
        int f = 1; // Initialize frequency for current element
        // Count frequency of arr[i]
        while (i + 1 < n && arr[i] == arr[i + 1]) {
            f++;
            i++;
        }
        // Print the element and its frequency
        cout << arr[i] << " " << f << endl;
        i++; // Move to the next unique element
    }
}
// Main function - entry point of the program
int main() {
    int arr[] = {1, 1, 1, 2, 3, 3, 5, 5, 8, 8, 8, 9, 9, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    Frequencies(arr, n);
    return 0;
}