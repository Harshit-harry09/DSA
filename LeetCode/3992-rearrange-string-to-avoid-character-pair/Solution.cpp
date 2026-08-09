// Problem: Rearrange String to Avoid Character Pair
// Problem ID: 3992
// Difficulty: Easy
// LeetCode URL: https://leetcode.com/problems/rearrange-string-to-avoid-character-pair/
// Language: cpp

class Solution {
public:
    string rearrangeString(string s, char x, char y) {
      string first = "";
        string second = "";
        string third = "";


        for(int i = 0;i<s.length();i++){
            if(s[i] == y){
                first += s[i];
            }
            else if(s[i] == x){
                third += s[i];
            }
            else {
            second += s[i];
            }
        }
        return first + second + third;
    }
};