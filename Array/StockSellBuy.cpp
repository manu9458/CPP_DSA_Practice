//
// Created by Manu on 5/24/2025.
//
#include<iostream>
using namespace std;
//maximum diff order problem//
/**
 * Calculates the maximum profit from stock trading by allowing multiple buy-sell transactions
 * @param arr Array containing stock prices for different days
 * @param n Size of the array
 * @return Total maximum profit that can be obtained
 */
int stockBuyAndSell(int arr[],int n){
    // Initialize variable to store the total profit
    int profit = 0;

    // Iterate through the array starting from second element
    for(int i=1;i<n;i++){
        // If current price is greater than previous day's price
        if(arr[i] > arr[i-1]){
            // Add the price difference to profit (Buy at previous day and sell at current day)
            profit += (arr[i] - arr[i-1]);
        }
    }
    // Return the total accumulated profit
    return profit;
}
int main(){
    int arr[]={100, 180, 260, 310, 40, 535, 695};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<stockBuyAndSell(arr,n);
}
