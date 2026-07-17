// Problem: Intersection of Two Arrays
// Problem ID: 0349
// Difficulty: Easy
// LeetCode URL: https://leetcode.com/problems/intersection-of-two-arrays/
// Language: cpp

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {

        int freq[1001] = {0};
        vector<int> result;

        
        for (int x : nums1) {
            freq[x] = 1;
        }

        // check nums2
        for (int x : nums2) {
            if (freq[x] == 1) {
                result.push_back(x);
                freq[x] = 0; 
            }
        }

        return result;
    }
};
