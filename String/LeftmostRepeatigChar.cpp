//
// Created by Manu on 6/1/2025.
//
#include<iostream>
using namespace std;
const int CHAR = 256;
/**
 * Finds the index of the leftmost repeating character in a given string.
 * This method uses a naive approach with nested loops to determine if a character repeats.
 *
 * @param str The input string to search for the leftmost repeating character.
 * @return The index of the leftmost repeating character if found, otherwise -1.
 */
int leftmostRepeatingCharNai(string str) {
    for (int i = 0; i < str.length(); i++) {
     for (int j = i+1; j < str.length(); j++) {
         if (str[i] == str[j]) {
             return i;
         }
     }
    }
}

/**
 * Finds the index of the leftmost character in the given string that repeats.
 *
 * This function utilizes an optimized approach where it counts the occurrences
 * of each character in the input string first and then identifies the first
 * character with a count greater than 1.
 *
 * @param str The input string in which the leftmost repeating character is to be found.
 * @return The index of the leftmost repeating character if it exists.
 *         Returns -1 if no character repeats in the string.
 */
int leftmostRepeatingCharOpt(string str) {
    int Count[CHAR] = {0};
    for (int i = 0; i < str.length(); i++) {
        Count[str[i]]++;
    }
    for (int i = 0; i < str.length(); i++) {
        if (Count[str[i]] > 1) {
            return i;
        }
    }
    return -1;
}

/**
 * Finds the index of the leftmost character in the given string that repeats.
 *
 * This function optimally identifies the first character from the left
 * that appears more than once in the string by traversing the string
 * from the end and keeping track of visited characters.
 *
 * @param str The input string in which to find the leftmost repeating character.
 * @return The index of the leftmost repeating character if found, otherwise -1.
 */
int leftmostRepeatingCharOpt2(string str) {
    bool visited[CHAR];
    fill(visited, visited + CHAR, false);
    int res = -1;
    for (int i = str.length() - 1; i >= 0; i--) {
        if (visited[str[i]]) {
            res = i;
        }
        visited[str[i]] = true;
    }
    return res;
}
int main() {
    string s = "dbacaba";
    // cout<<leftmostRepeatingCharNai(s);
    // cout<<leftmostRepeatingCharOpt(s);
    cout<<leftmostRepeatingCharOpt2(s);
}