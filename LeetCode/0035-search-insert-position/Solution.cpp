// Problem: Search Insert Position
// Problem ID: 0035
// Difficulty: Easy
// LeetCode URL: https://leetcode.com/problems/search-insert-position/
// Language: cpp

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();
      auto it =  lower_bound(nums.begin(),nums.end(),target);
      return it - nums.begin();

    }
};