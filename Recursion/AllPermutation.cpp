//
// Created by Manu on 6/13/2025.
//
#include<iostream>
#include<string>
using namespace std;
/**
 * Generates all permutations of a given string by recursively swapping characters.
 *
 * @param str The string for which permutations are being generated.
 * @param start The starting index of the current permutation.
 * @param end The ending index of the string to determine the permutation range.
 */
void all_permutations(string str, int start, int end) {
    if (start == end) {
        cout<<str<<endl;
    }
    for (int i=start;i<=end;i++) {
        swap(str[start], str[i]);
        all_permutations(str, start+1, end);
        swap(str[start], str[i]);
    }
}

/**
 * The entry point of the program which initializes and orchestrates its execution.
 *
 * @return An integer indicating the exit status of the program (commonly 0 for success, or a non-zero value for errors).
 */
int main() {
    string str = "abc";
    all_permutations(str,0,str.length()-1);
}