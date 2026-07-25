// Problem: Sort an Array
// Problem ID: 0912
// Difficulty: Medium
// LeetCode URL: https://leetcode.com/problems/sort-an-array/
// Language: cpp

class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        
        sort(nums.begin(), nums.end()); 
        return nums;
   
    }
};