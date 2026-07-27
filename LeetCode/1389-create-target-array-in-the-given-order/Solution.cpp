// Problem: Create Target Array in the Given Order
// Problem ID: 1389
// Difficulty: Easy
// LeetCode URL: https://leetcode.com/problems/create-target-array-in-the-given-order/
// Language: cpp

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        int n = nums.size();
        vector<int> target(n);
        int size = 0;           

        for (int i = 0; i < n; i++) {

            
            for (int j = size; j > index[i]; j--) {
                target[j] = target[j - 1];
            }

            
            target[index[i]] = nums[i];
            size++;
        }

        return target;
    }
};
