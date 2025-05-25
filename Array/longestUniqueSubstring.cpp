//
// Created by Manu on 5/25/2025.
//
#include<iostream>
#include<unordered_set>
#include<algorithm>
using namespace std;
int longestUniqueSubstring(string s) {
    // Create an unordered set to store unique characters
    unordered_set<char> set;
    // Initialize left pointer for sliding window
    int left = 0;
    // Variable to store the maximum length of unique substring
    int maxLength = 0;
    // Iterate through the string with right pointer
    for (int right = 0; right < s.size(); right++) {
        // While we find duplicate character, remove characters from left
        while (set.count(s[right])) {
            // Remove the leftmost character from set
            set.erase(s[left]);
            // Move left pointer ahead
            left++;
        }
        // Insert current character into set
        set.insert(s[right]);
        // Update maxLength if current set size is larger
        if (set.size() > maxLength) {
            maxLength = set.size();
        }
    }
    // Return the length of longest substring with unique characters
    return maxLength;
}

string longestUniqueSubstringCh(string s) {
    // Create an unordered set to store unique characters
    unordered_set<char> set;
    // Initialize left pointer for sliding window
    int left = 0;
    // Variable to store the maximum length found
    int maxLength = 0;
    // Variable to store starting index of longest substring
    int start = 0;
    // Iterate through the string with right pointer
    for (int right = 0; right < s.size(); right++) {
        // While we find duplicate character, remove characters from left
        while (set.count(s[right])) {
            // Remove the leftmost character from set
            set.erase(s[left]);
            // Move left pointer ahead
            left++;
        }
        // Insert current character into set
        set.insert(s[right]);
        // Calculate current window length
        int curr_length = right - left + 1;
        // Update maxLength and start index if current length is larger
        if (curr_length > maxLength) {
            maxLength = curr_length;
            start = left;
        }
    }
    // Return the substring from start index with maxLength
    return s.substr(start, maxLength);
}
int main() {
    string s = "abcabcbb";
    cout<<longestUniqueSubstringCh(s);
}