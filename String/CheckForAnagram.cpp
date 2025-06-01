//
// Created by Manu on 6/1/2025.
//
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
const int CHAR = 256;
/**
 * Checks if two strings are anagrams of each other using the naive approach.
 *
 * Two strings are considered anagrams if they are made of the same characters
 * with the same frequency, regardless of their order.
 *
 * @param a The first string to be checked.
 * @param b The second string to be checked.
 * @return True if the two strings are anagrams, false otherwise.
 */
bool checkAnagramNaive(string a, string b) {
    if (a.length() != b.length()) {
        return false;
    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    return a == b;
}

/**
 * Determines whether two given strings are anagrams of each other.
 * An anagram is a word or phrase that is formed by rearranging the letters of another.
 *
 * @param a The first input string to be compared.
 * @param b The second input string to be compared.
 * @return True if the strings are anagrams, otherwise false.
 */
bool checkAnagramOptimze(string a, string b) {
    int count[CHAR] = {0};
    for (int i = 0; i < a.length(); i++) {
        count[a[i]]++;
        count[b[i]]--;
    }
    for (int i = 0; i < CHAR; i++) {
        if (count[i] != 0) {
            return false;
        }
    }
    return true;
}
int main() {
    string a = "abc";
    string b = "bca";
    cout<<checkAnagramOptimze(a,b);
}