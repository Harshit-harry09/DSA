// Problem: Longest Consecutive Sequence
// Problem ID: 0128
// Difficulty: Medium
// LeetCode URL: https://leetcode.com/problems/longest-consecutive-sequence/
// Language: cpp

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n =  nums.size();
        int longest = 0;
        if(n ==0) return 0;
        unordered_set<int> st;
        for(int i =0;i<n;i++){
            st.insert(nums[i]);
        }
        for(auto it :st){
            if(st.find(it -1) == st.end()){
                int cnt =1;
                int x = it;
                while(st.find(x+1) != st.end()){
                    x = x + 1;
                    cnt++;
                }
                longest = max(longest,cnt);
            }
        }
        return longest;
    }
};