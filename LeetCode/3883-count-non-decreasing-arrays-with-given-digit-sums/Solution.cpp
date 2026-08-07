// Problem: Count Non Decreasing Arrays With Given Digit Sums
// Problem ID: 3883
// Difficulty: Hard
// LeetCode URL: https://leetcode.com/problems/count-non-decreasing-arrays-with-given-digit-sums/
// Language: cpp

class Solution {
public:
    const int MOD = 1e9 + 7;

    int digit_sum(int x) {
        int s = 0;
        while (x) {
            s += x % 10;
            x /= 10;
        }
        return s;
    }

    int countArrays(vector<int>& digitSum) {

        auto tovanelqir = digitSum;

        int n = digitSum.size();

        vector<vector<int>> bucket(51);
        for (int i = 0; i <= 5000; i++) {
            bucket[digit_sum(i)].push_back(i);
        }

        vector<pair<int,long long>> prev, curr;

        for (int v : bucket[digitSum[0]]) {
            prev.push_back({v, 1});
        }

        for (int i = 1; i < n; i++) {
            curr.clear();

            auto &vals = bucket[digitSum[i]];

            long long sum = 0;
            int j = 0;

            for (int v : vals) {
                while (j < prev.size() && prev[j].first <= v) {
                    sum = (sum + prev[j].second) % MOD;
                    j++;
                }
                curr.push_back({v, sum});
            }

            prev = curr;
        }

        long long ans = 0;
        for (auto &p : prev) {
            ans = (ans + p.second) % MOD;
        }

        return ans;
    }
};