// Problem: Create Grid With Exactly One Path
// Problem ID: 3963
// Difficulty: Easy
// LeetCode URL: https://leetcode.com/problems/create-grid-with-exactly-one-path/
// Language: cpp

class Solution {
public:
    vector<string> createGrid(int m, int n) {
        vector<vector<char>> gd(m,vector<char>(n,'#'));
       for(int i =0;i<m;i++){
           gd[i][0]= '.';
       }
        for(int j = 0;j<n;j++){
            gd[m-1][j]= '.';
        }
        vector<string>ans;
        for(int i =0;i<m;i++){
            ans.push_back(string(gd[i].begin(),gd[i].end()));
        }
        return ans;
    }
};