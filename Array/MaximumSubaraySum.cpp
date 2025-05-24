//
// Created by Manu on 5/24/2025.
//
#include<iostream>
using namespace std;
int maximumSum(int arr[],int n) {
    int curr_sum = 0;
    int max_sum = 0;

    for (int i=0;i<n;i++) {
        curr_sum += arr[i];
        if (curr_sum > max_sum) {
            max_sum = curr_sum;
        }
        if (curr_sum < 0) {
            curr_sum = 0;
        }
    }
    return max_sum;;
}
int main() {
    int arr[] = {-2, -3, 4, -1, -2, 1, 5, -3};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"Maximum Subarray Sum:"<<maximumSum(arr,n);
}