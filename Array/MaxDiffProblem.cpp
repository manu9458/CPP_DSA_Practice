//
// Created by Manu on 5/24/2025.
//
#include<iostream>
using namespace std;
// Function to find maximum difference between two elements where larger element appears after smaller element
int Max_diff(int arr[], int n){
    // Initialize maxSoFar with first element as minimum element seen so far
    int maxSoFar = arr[0];

    // Initialize maxProfit with difference of first two elements
    int maxProfit = arr[1] - arr[0];

    // Iterate through array starting from second element
    for(int i = 1; i < n; i++){
        // Calculate current difference by subtracting minimum element seen so far from current element
        int currSoFar = arr[i] - maxSoFar;

        // Update maxProfit if current difference is greater than existing maxProfit
        maxProfit = max(currSoFar, maxProfit);

        // Update minimum element seen so far if current element is smaller
        maxSoFar = min(maxSoFar, arr[i]);
    }

    // Return the maximum profit/difference found
    return maxProfit;
}

int main(){
    int arr[]={2, 3, 10, 6, 4, 8, 1};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<Max_diff(arr,n);
}