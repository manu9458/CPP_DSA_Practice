// Created by Manu on 5/24/2025
//
#include <iostream>
using namespace std;

// Brute Force approach to find leaders
void leaderInArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        bool isLeader = true; // Assume arr[i] is a leader
        for (int j = i + 1; j < n; j++) {
            if (arr[i] <= arr[j]) { // If any element to the right is >= arr[i]
                isLeader = false;   // arr[i] is not a leader
                break;
            }
        }
        if (isLeader) {
            cout << arr[i] << " ";
        }
    }
}
//optmized Approach//
void LeaderOptimized(int arr[],int n) {
    int last_element = arr[n-1];
    cout<<last_element<<" ";
    for (int i=n-2;i>=0;i--) {
        if (arr[i]>last_element) {
            cout<<arr[i]<<" ";
            last_element = arr[i];
        }
    }
}
int main() {
    int arr[] = {16, 17, 4, 3, 5, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    LeaderOptimized(arr, n);
    return 0;
}