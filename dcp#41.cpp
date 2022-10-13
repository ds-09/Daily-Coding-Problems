/*
Given a array of numbers representing the stock prices of a company in chronological order, write a function that calculates the maximum profit you could have made from buying and selling that stock once.You must buy before you can sell it.                                                                                           For example,
    given[9, 11, 8, 5, 7, 10], you should return 5, since you could buy the stock at 5 dollars and sell it at 10 dollars.
*/

// Online C++ compiler to run C++ program online
#include <stdio.h>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    int n, buy, sell, profit = 0;
    cout << "Enter no. of stock prices: " << endl;
    cin >> n;
    int arr[n];
    cout << "Enter stock prices: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        buy = arr[i];
        for (int j = i + 1; j < n; j++)
        {
            sell = arr[j];
            if (buy < sell && arr[j + 1] > sell)
            {
                sell = arr[j + 1];
            }
            if (sell - buy > profit)
            {
                profit = sell - buy;
            }
        }
    }
    cout << "Max profit= " << profit;
}
