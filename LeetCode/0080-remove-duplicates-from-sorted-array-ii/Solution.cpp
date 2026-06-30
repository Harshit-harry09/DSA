// Problem: Remove Duplicates from Sorted Array II
// Problem ID: 0080
// Difficulty: Medium
// LeetCode URL: https://leetcode.com/problems/remove-duplicates-from-sorted-array-ii/
// Language: cpp

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        if (n <= 2) return n;  

        int i = 2; 
        for (int j = 2; j < n; j++) {
            if (nums[j] != nums[i - 2]) {
                nums[i] = nums[j];
                i++;
            }
        }
        return i;
    }
};
