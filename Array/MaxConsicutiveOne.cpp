//
// Created by Manu on 5/24/2025.
//
#include<iostream>
using namespace std;

int maxConsecutiveOnes(int arr[],int n) {
    int count = 0;
    int res = 0;
    for (int i=0;i<n;i++) {
        if (arr[i] == 1) {
            count++;
            res = max(count, res);
        }
        else {
            count = 0;
        }
    }
    return res;
}
int main() {
    int arr[]={1,1,0,1,1,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"Maximum consecutive ones is:"<<maxConsecutiveOnes(arr,n);
}