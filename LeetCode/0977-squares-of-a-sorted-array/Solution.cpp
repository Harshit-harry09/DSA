// Problem: Squares of a Sorted Array
// Problem ID: 0977
// Difficulty: Easy
// LeetCode URL: https://leetcode.com/problems/squares-of-a-sorted-array/
// Language: cpp

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        for(int i = 0;i<nums.size();i++){
            nums[i]=nums[i]*nums[i]; 
        }
        sort(nums.begin(),nums.end()); 
        return nums;
    }
};