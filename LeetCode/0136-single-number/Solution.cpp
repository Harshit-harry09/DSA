// Problem: Single Number
// Problem ID: 0136
// Difficulty: Easy
// LeetCode URL: https://leetcode.com/problems/single-number/
// Language: cpp

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int xor1 = 0;
        for(int i =0;i<nums.size();i++){
            xor1 = xor1^nums[i];
        }
        return xor1;
    }
};