// Problem: Find Greatest Common Divisor of Array
// Problem ID: 1979
// Difficulty: Easy
// LeetCode URL: https://leetcode.com/problems/find-greatest-common-divisor-of-array/
// Language: cpp

class Solution {
public:
    int findGCD(vector<int>& nums) {
        int n = nums.size();
        int maxx = nums[0];
        int minn = nums[0];
        for(int i = 0;i<n;i++){
            if(nums[i]< minn){
                minn= nums[i];
            }
            if(nums[i]>maxx){
                maxx = nums[i];
            }
        }
        return gcd(maxx,minn);
    }
};