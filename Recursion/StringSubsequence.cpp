//
// Created by Manu on 6/8/2025.
//
#include<string>
#include<iostream>
using namespace std;

/**
 * Recursively prints all subsequences of the given string.
 *
 * @param str The input string from which subsequences will be generated.
 * @param index The current index in the string being processed.
 * @param curr The current subsequence being constructed.
 */
void printSubsequence(string str, int index, string curr) {
    if (str.length() == index) {
        cout<<curr<<endl;
        return;
    }
    printSubsequence(str, index+1, curr);
    printSubsequence(str, index+1, curr+str[index]);
}

/**
 * The main entry point of the program.
 *
 * @return Returns 0 to indicate successful program execution.
 */
int main() {
    string str = "abc";
    printSubsequence(str, 0, "");
}