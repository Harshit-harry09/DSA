// Problem: Reverse Integer
// Problem ID: 0007
// Difficulty: Medium
// LeetCode URL: https://leetcode.com/problems/reverse-integer/
// Language: cpp

class Solution {
public:
    int reverse(int x) {
        long rn = 0;
        
        while(x!=0){
           long ld = x%10;
            x = x/10;
            rn = (rn *10) + ld;
        }
        if(rn > INT_MAX || rn < INT_MIN) return 0;
        return rn;
    }
};