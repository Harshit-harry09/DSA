// Problem: Sum of Unique Elements
// Problem ID: 1748
// Difficulty: Easy
// LeetCode URL: https://leetcode.com/problems/sum-of-unique-elements/
// Language: cpp

class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
       int a[101]={0};
       
        for (int num : nums) {
            a[num]++;
        }

        
        int sum = 0;
        for (int i = 1; i <= 100; i++) {
            if (a[i] == 1) {
                sum += i;
            }
        }
        return sum;
    }
    
};