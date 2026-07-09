// Problem: Rotate Array
// Problem ID: 0189
// Difficulty: Medium
// LeetCode URL: https://leetcode.com/problems/rotate-array/
// Language: cpp

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k%n;


        reverse(nums.begin(),nums.end());
        reverse(nums.begin(),nums.begin()+k);
        reverse(nums.begin()+k, nums.end());
    }
};