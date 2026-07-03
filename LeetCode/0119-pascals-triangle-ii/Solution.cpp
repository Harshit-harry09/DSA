// Problem: Pascal's Triangle II
// Problem ID: 0119
// Difficulty: Easy
// LeetCode URL: https://leetcode.com/problems/pascals-triangle-ii/
// Language: cpp

class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int>row;
        long long ans= 1;
        row.push_back(ans);
        for(int i =1;i<=rowIndex;i++){
            ans = ans * (rowIndex-i+1);
            ans = ans/i;
            row.push_back(ans);
        }
        return row;
    }
};