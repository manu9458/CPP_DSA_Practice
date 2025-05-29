//
// Created by Manu on 5/29/2025.
//
#include<iostream>
#include<string>
using namespace std;

/**
 * Checks if the given string is a palindrome.
 * A palindrome is a string that reads the same forward and backward.
 *
 * @param str The string to check for palindrome properties.
 * @param index The index from which the comparison starts, default is 0.
 * @return True if the string is a palindrome, otherwise false.
 */
bool palindrome(string str, int index = 0) {
    while (index < str.length()/2) {
        if (str[index] != str[str.length()-1-index]) {
            return false;
        }
        index++;
    }
    return true;
}

int main() {
    string str = "madam";
    cout<<palindrome(str);
}