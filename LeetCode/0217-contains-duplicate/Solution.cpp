// Problem: Contains Duplicate
// Problem ID: 0217
// Difficulty: Easy
// LeetCode URL: https://leetcode.com/problems/contains-duplicate/
// Language: cpp

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int> mpp;

        for (int x : nums) {
            mpp[x]++;

            if (mpp[x] > 1) {   // ✅ check inside loop
                return true;
            }
        }

        return false;
    }
};
