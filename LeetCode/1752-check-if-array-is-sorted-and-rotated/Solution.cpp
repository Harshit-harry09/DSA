// Problem: Check if Array Is Sorted and Rotated
// Problem ID: 1752
// Difficulty: Easy
// LeetCode URL: https://leetcode.com/problems/check-if-array-is-sorted-and-rotated/
// Language: cpp

class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        int count = 0;

        
        for(int i = 0; i < n-1; i++){
            if(nums[i] > nums[i+1]){
                count++;
            }
        }

        
        if(nums[n-1] > nums[0]){
            count++;
        }

        return count <= 1;
    }
};