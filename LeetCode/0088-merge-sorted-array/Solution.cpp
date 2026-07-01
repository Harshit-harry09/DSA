// Problem: Merge Sorted Array
// Problem ID: 0088
// Difficulty: Easy
// LeetCode URL: https://leetcode.com/problems/merge-sorted-array/
// Language: cpp

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int left = 0;
        int right = 0;

        
        vector<int> nums3;

        while(left < m && right < n){
            if(nums1[left] <= nums2[right]){
                nums3.push_back(nums1[left++]);
            } else {
                nums3.push_back(nums2[right++]);
            }
        }

        while(left < m) nums3.push_back(nums1[left++]);
        while(right < n) nums3.push_back(nums2[right++]);

       
        for(int i = 0; i < m+n; i++){
            nums1[i] = nums3[i];
        }
    }
};
