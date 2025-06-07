//
// Created by Manu on 6/7/2025.
//
#include <iostream>
using namespace std;
int fabbianoSeries(int n) {
    if (n == 0) {
        return 0;
    }
    return n + fabbianoSeries(n-1);
}
int main() {
    int  n0;
    cin>>n0;
    cout<<"Fabbiano Series is:"<<fabbianoSeries(n0);
}