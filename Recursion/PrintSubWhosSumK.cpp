#include<iostream>
#include<vector>
using namespace std;

/**
 * Recursively prints all subsequences of the array whose sum equals the given target sum `k`.
 * If a valid subsequence is empty, an empty set "{}" will be printed.
 *
 * @param ds A vector to store the current subsequence being formed.
 * @param index The current index in the array being processed.
 * @param sum The sum of the elements in the current subsequence.
 * @param n The size of the array.
 * @param arr The input array of integers.
 * @param k The target sum that the subsequences should equal.
 */
void printSub(vector<int> ds, int index, int sum, int n, int arr[], int k) {
    if (index == n) {
        if (sum == k) {
            if (ds.empty()) {
                cout << "{}" << endl; // Handle empty subsequence
            } else {
                for (auto i : ds) {
                    cout << i << " ";
                }
                cout << endl;
            }
        }
        return;
    }
    ds.push_back(arr[index]);
    printSub(ds, index + 1, sum + arr[index], n, arr, k); // Update sum when including element

    ds.pop_back();
    printSub(ds, index + 1, sum, n, arr, k); // Sum unchanged when excluding element
}

/**
 * The entry point of the program which initializes execution.
 *
 * @return An integer value indicating the exit status of the program.
 * Typically, 0 indicates successful completion, while a non-zero value
 * represents an error or abnormal termination.
 */
int main() {
    int arr[] = {1, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 2; // Changed k to 2 for valid output with given array
    vector<int> ds;
    printSub(ds, 0, 0, n, arr, k);
}