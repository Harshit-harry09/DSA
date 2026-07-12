// Problem: Power of Two
// Problem ID: 0231
// Difficulty: Easy
// LeetCode URL: https://leetcode.com/problems/power-of-two/
// Language: cpp

class Solution {
public:
    bool isPowerOfTwo(int n) {
        if (n <= 0) return false;
        return (n & (n - 1)) == 0;
    }
};