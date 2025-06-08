//
// Created by Manu on 6/8/2025.
//
#include <iostream>
#include <vector>
using namespace std;

/**
 * @brief Generates and prints all possible subsequences of a given vector.
 *
 * This function recursively generates all the subsequences of the input
 * vector `vec` and prints each subsequence to the console. A subsequence
 * is any sequence derived from the array by deleting some or no elements
 * without changing the order of the remaining elements.
 *
 * @param arr A vector that holds the current subsequence being constructed.
 *            It is initially empty and modified during recursion.
 * @param index An integer indicating the current index being processed
 *              in the input vector `vec`.
 * @param vec The input vector whose subsequences are to be generated.
 *
 * The function uses recursion to decide whether to include or exclude
 * each element of the vector `vec` in the `arr` during the generation of
 * subsequences. When the processing reaches the end of `vec` (i.e.,
 * `index == vec.size()`), the function prints the current version of the
 * subsequence, represented by `arr`.
 *
 * Base Case:
 * - When the index reaches the size of `vec`, the generated subsequence
 *   present in `arr` is printed. If `arr` is empty, it prints an empty
 *   subsequence `{}.
 *
 * Recursive Steps:
 * - Include the current element `vec[index]` in `arr` and make a recursive
 *   call with the next index.
 * - Exclude the current element `vec[index]` from `arr` and make another
 *   recursive call with the next index.
 */
void subsequence(vector<int> arr, int index, vector<int> vec) {
    if (index == vec.size()) {
        if (arr.empty()) {
            cout << "{}" << endl;
        } else {
            for (auto it : arr) {
                cout << it << " ";
            }
            cout << endl;
        }
        return;
    }

    // Include vec[index]
    arr.push_back(vec[index]);
    subsequence(arr, index + 1, vec);

    // Exclude vec[index]
    arr.pop_back();
    subsequence(arr, index + 1, vec);
}

/**
 * @brief The entry point for program execution.
 *
 * This function serves as the starting point for the program. It initializes
 * the environment, handles input/output, and orchestrates the execution of
 * other functions or components within the application. The implementation
 * details depend on the specific functionality of the program.
 *
 * Control typically begins with the `main` function and ends when it returns.
 * Returning 0 generally indicates successful execution, while other return
 * values may indicate specific error conditions or statuses.
 *
 * @return An integer value indicating the program's termination status:
 *         - `0` for successful execution.
 *         - Non-zero values for errors or specific exit codes.
 */
int main() {
    vector<int> vec = {3,2,1};
    vector<int> arr;  // Start with empty subsequence
    subsequence(arr, 0, vec);
    return 0;
}
