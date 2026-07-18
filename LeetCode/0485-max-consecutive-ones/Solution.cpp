// Problem: Max Consecutive Ones
// Problem ID: 0485
// Difficulty: Easy
// LeetCode URL: https://leetcode.com/problems/max-consecutive-ones/
// Language: cpp

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxi = 0;
        int cnt = 0;
        for(int i = 0;i<nums.size();i++){
            if(nums[i]== 1){
                 cnt++;
            maxi = max(maxi,cnt);
            
        }
            else{
                cnt = 0;
            }
        }
        return maxi;
    }
};