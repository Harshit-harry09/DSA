// Problem: Array Partition
// Problem ID: 0561
// Difficulty: Easy
// LeetCode URL: https://leetcode.com/problems/array-partition/
// Language: cpp

class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int sum = 0;
        for(int i = 0; i < nums.size(); i += 2) {
            sum += nums[i];
        }

        return sum;
    }
};