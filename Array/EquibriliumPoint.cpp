//
// Created by Manu on 5/25/2025.
//
#include<iostream>
using namespace std;
int EquilibriumPoint(int arr[],int n) {
    int rs = 0;
    int ls= 0;
    for (int i=0;i<n;i++) {
        rs += arr[i];
    }
    for (int i=0;i<n;i++) {
        rs -= arr[i];
        if (ls == rs) {
            return arr[i];
        }
        ls += arr[i];
    }
    return -1;
}
int main() {
    int  arr[] = {-7, 1, 5, 2, -4, 3, 0};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<EquilibriumPoint(arr,n);
}