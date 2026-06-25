// Problem: Maximum Subarray
// Problem ID: 0053
// Difficulty: Medium
// LeetCode URL: https://leetcode.com/problems/maximum-subarray/
// Language: cpp

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        long long sum = 0;
        long long maxi = LONG_MIN;
        int start;
        for(int i =0;i<nums.size();i++){
            if(sum == 0) start = i;
            sum += nums[i];
            if(sum >maxi){
                maxi =sum;
                int ans_start = start;
                int end = i;
            }
            if(sum<0){
                sum =0;
            }
        }
      return maxi;
    }
};