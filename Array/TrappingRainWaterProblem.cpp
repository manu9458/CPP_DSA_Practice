//
// Created by Manu on 5/24/2025.
//
#include<iostream>
using namespace std;
// Function to calculate trapped rainwater between buildings
// Parameters: arr[] - array of building heights, n - size of array
int trappingRainWaterProblem(int arr[],int n) {
    // Arrays to store maximum heights from left and right for each position
    int left[n];
    int right[n];

    // Initialize the leftmost building's left max as itself
    left[0] = arr[0];
    // Fill the left array with maximum heights from left side
    for (int i = 1; i < n; i++) {
        left[i] = max(arr[i], left[i-1]);
    }

    // Initialize the rightmost building's right max as itself
    right[n-1] = arr[n-1];
    // Fill the right array with maximum heights from right side
    for (int i = n-2; i >=0; i--) {
        right[i] = max(arr[i], right [i+1]);
    }

    // Variable to store the total trapped water
    int res = 0;
    // Calculate water trapped at each position and sum it up
    for (int i = 0; i < n; i++) {
        res += min(left[i],right[i]) - arr[i];
    }
    // Return the total amount of trapped water
    return res;
}

int main() {
    int arr[]= {0,1,0,2,1,0,1,3,2,1,2,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<trappingRainWaterProblem(arr,n);
}