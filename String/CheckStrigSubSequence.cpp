//
// Created by Manu on 5/29/2025.
//
#include<iostream>
#include<string>
using namespace std;

/**
 * Checks if string b is a subsequence of string a.
 *
 * A string b is a subsequence of string a if all characters of b appear in a,
 * in the same order, but not necessarily consecutively.
 *
 * @param a The string in which to check for the subsequence.
 * @param b The string that is being checked as a subsequence.
 * @param m The length of string a.
 * @param n The length of string b.
 * @return True if string b is a subsequence of string a, otherwise false.
 */
bool subSequenceString(string a, string b, int m, int n) {
    int j = 0;
    for (int i = 0; i < m && j < n; i++) {  // Fixed the logical condition in the 'for' loop
        if (a[i] == b[j]) {
            j++;
        }
    }
    return (j == n);
}
int main() {
    string a = "abc";
    string b = "ac";
    cout<<subSequenceString(a,b,3,2);
}