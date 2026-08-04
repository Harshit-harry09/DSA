// Problem: Find the XOR of Numbers Which Appear Twice
// Problem ID: 3158
// Difficulty: Easy
// LeetCode URL: https://leetcode.com/problems/find-the-xor-of-numbers-which-appear-twice/
// Language: cpp

class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int xor1 =0;
    for(int i =0;i<nums.size()-1;i++){
        if(nums[i]==nums[i+1]){
            xor1 =xor1^nums[i];
            i++;
        }
    }
    return xor1;
    }
};