// Problem: Fibonacci Number
// Problem ID: 0509
// Difficulty: Easy
// LeetCode URL: https://leetcode.com/problems/fibonacci-number/
// Language: cpp

class Solution {
public:
    int fib(int n) {
        int a = 0, b = 1;
        while (n-- > 0) {
            int temp = a;
            a = b;
            b = temp + b;
        }
        return a;
    }
};
