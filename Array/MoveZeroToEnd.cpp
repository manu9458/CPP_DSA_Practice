//
// Created by Manu on 5/24/2025.
//
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void moveZeroToEnd(int arr[], int n) {
    int res = 0;
    for (int i=0;i<n;i++) {
        if (arr[i]!=0) {
            swap(arr[i], arr[res]);
            res++;
        }
    }
}

int main() {
    int arr[] = {0, 1, 0, 3, 12};
    int n = sizeof(arr) / sizeof(arr[0]);
    moveZeroToEnd(arr, n);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}