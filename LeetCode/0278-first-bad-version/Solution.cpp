// Problem: First Bad Version
// Problem ID: 0278
// Difficulty: Easy
// LeetCode URL: https://leetcode.com/problems/first-bad-version/
// Language: cpp

// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        long long  start = 1, end = n;
        while(start<end){
           int mid = start +(end - start)/2;
            if(isBadVersion(mid)){
            end=mid;
            }
            else {
            start = mid +1;
            }
        }
        return start;
    }
};