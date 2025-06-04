//
// Created by Manu on 6/4/2025.
//
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
bool stringRotation(string s1, string s2) {
    if (s1.length() != s2.length()) {
        return false;
    }
    return (s1+s1).find(s2) != string::npos;
}

int main() {
    string s1 = "ABCD";
    string s2 = "CDA";
    cout << stringRotation(s1, s2) << endl;
}
