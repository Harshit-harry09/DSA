// Problem: Remove Duplicates from Sorted Array
// Problem ID: 0026
// Difficulty: Easy
// LeetCode URL: https://leetcode.com/problems/remove-duplicates-from-sorted-array/
// Language: cpp

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int  i =0;
        for(int j =1;j<nums.size();j++){
            if(nums[j]!=nums[i]){
                nums[i+1]=nums[j];
                i++;
            }
        }
        return i+1;
    }
};