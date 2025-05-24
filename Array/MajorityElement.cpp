//
// Created by Manu on 5/24/2025.
//
#include<unordered_map>
#include<iostream>
using namespace std;

int majorityElement(int arr[], int n) {
    unordered_map<int, int> mp;
    for (int i=0;i<n;i++) {
        mp[arr[i]]++;
    }
    for (auto it: mp) {
        if (it.second > n/2) {
            return it.first;
        }
    }
    return -1;
}

int main() {
    int arr []={3, 3, 4, 2, 4, 4, 2, 4, 4};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"Majority Element is:"<<majorityElement(arr,n);
}