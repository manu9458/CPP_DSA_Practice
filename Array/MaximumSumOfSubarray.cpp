//
// Created by Manu on 5/25/2025.
//
#include<iostream>
#include<vector>
using namespace std;
// Function to find maximum sum of k consecutive elements in an array
int maximumSum(vector<int> arr, int k) {
    // Initialize variable to store sum of current window
    int window_sum = 0;

    // Calculate sum of first k elements
    for (int i = 0;i < k; i++) {
        window_sum += arr[i];
    }

    // Initialize max_sum with the sum of first window
    int max_sum = window_sum;

    // Slide the window through remaining elements
    for (int i = k; i < arr.size(); i++) {
        // Add new element and remove first element of previous window
        window_sum += arr[i] - arr[i-k];
        // Update max_sum if current window_sum is greater
        max_sum = max(max_sum, window_sum);
    }
    // Return the maximum sum found
    return max_sum;
}

int main(){
    vector<int> arr = {2, 1, 5, 1, 3, 2};
    int k = 3;
    cout<<maximumSum(arr,k);
}